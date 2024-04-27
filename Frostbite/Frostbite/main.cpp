#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

#include "Region.h"

int menuStart() {
    int choice;

    std::cout << "----------------------------Frostbite----------------------------" << std::endl;
    std::cout << "1. Start game." << std::endl;
    std::cout << "2. Save game." << std::endl;
    std::cout << "3. Load save." << std::endl;
    std::cout << "4. Titles." << std::endl;
    std::cout << "5. Exit." << std::endl;

    std::cout << "\nWhat will you choose?" << " ";

    do {
        std::cin >> choice;
    } while (choice < 1 || choice > 5);

    return choice;
}

int menuBasic() {
    std::ifstream input("regions.txt");

    RegionRegistry regions;
    regions.loadFromStream(input);

    int regionID = 1;
    int countRegions = 6;

    for (int i = 1; i < countRegions + 1; ++i) {
        std::cout << regions.getRegionDef(i)->regionName << std::endl;
        std::cout << regions.getRegionDef(i)->description << std::endl;

        int countActionsRandom = 1;

        for (int j = 1; j < countActionsRandom + 1; ++j)
        {
            int randomActionID = 0;
            std::cout << regions.getRegionDef(i)->actions[randomActionID] << std::endl;

            std::string choiceVariant;

            for (int k = 0; k < regions.getRegionDef(i)->variantsToChoose[randomActionID].size(); ++k) {
                std::cout << regions.getRegionDef(i)->variantsToChoose[randomActionID][k] << std::endl;
            }
            do {
                std::cin >> choiceVariant;
            } while (choiceVariant != "A" || choiceVariant != "B" || choiceVariant != "C");
        }
    }
    return 0;
}

int main(int argc, char* argv[])
{
    int choiceMenuStart = menuStart();

    do {
        if (choiceMenuStart == 1) {
            menuBasic();
        }
    } while (choiceMenuStart != 5);

    return 0;
}