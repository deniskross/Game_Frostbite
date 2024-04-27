#pragma once
#include <string>
#include <vector>

struct RegionDef {
	int id;
	int countActions;
	std::string regionName;
	std::string description;
	std::vector<std::string> actions;
	std::vector<std::vector <std::string> > variantsToChoose;
};

class RegionRegistry {
public:
	const RegionDef *getRegionDef(int id) const;
	void loadFromStream(std::istream& is);
private:
	std::vector<RegionDef> regions_;
};

/* 
class Region {
public:
	Region(const std::string &regionName, const std::string &description, const std::string &connectedRegion, const std::vector<std::string> &actions, const int &regionLevel, const int &countActions)
		: regionName_(regionName)
		, description_(description)
		, connectedRegion_(connectedRegion)
		, actions_(actions)
		, regionLevel_(regionLevel)
		, countActions_(countActions)
	{}

	~Region () noexcept {}

	std::string regionName() const {
		return regionName_;
	}

	std::string description() const {
		return description_;
	}

	std::string connectedRegion() const {
		return connectedRegion_;
	}

	std::vector<std::string> actions() const {
		return actions_;
	}

	int regionLevel() const {
		return regionLevel_;
	}

	int countActions() const {
		return countActions_;
	}

	void interact();

private:
	std::string regionName_;
	std::string description_;
	std::string connectedRegion_;
	std::vector<std::string> actions_;
	int regionLevel_;
	int countActions_;
};
*/