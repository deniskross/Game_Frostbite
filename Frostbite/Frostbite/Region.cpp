#include "Region.h"
#include <iostream>
#include <cassert>

const int MAX_STRING_LEN = 255;

const RegionDef* RegionRegistry::getRegionDef(int id) const {
    assert(id >= 0 && id < regions_.size());
    return &regions_[id];
}

void RegionRegistry::loadFromStream(std::istream& is) {
    regions_.clear();

    int countRegions = 0;
    is >> countRegions;

    RegionDef emptyDef;
    emptyDef.id = 0;
    regions_.push_back(std::move(emptyDef));

    for (int k = 0; k < countRegions; ++k) {
        RegionDef rd;
        is >> rd.id;
        char buf[MAX_STRING_LEN + 1] = { 0 };
        is.getline(buf, MAX_STRING_LEN);

        memset(buf, 0, sizeof(buf));
        is.getline(buf, MAX_STRING_LEN);
        rd.regionName = buf;

        memset(buf, 0, sizeof(buf));
        is.getline(buf, MAX_STRING_LEN);
        rd.description = buf;

        is >> rd.countActions;
        for (int i = 0; i < rd.countActions; ++i) {
            std::string action;
            int actionId = i;
            is >> action;
            rd.actions.push_back(action);

            int countVariants;
            is >> countVariants;
            for (int j = 0; j < countVariants; ++j) {
                rd.variantsToChoose.push_back(std::vector <std::string>());
            }
        }
        regions_.push_back(std::move(rd));
    }
};