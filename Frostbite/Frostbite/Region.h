#pragma once
#include <string>
#include <vector>

class Region {
public:
	std::string regionName() const {
		return regionName_;
	}

	std::string description() const {
		return description_;
	}

	std::string connectedRegion() const {
		return connectedRegion_;
	}

	std::vector<std::string> actions() {
		return actions_;
	}

	int regionLevel() const {
		return regionLevel_;
	}

	int countActions() const {
		return countActions_;
	}

	void interact() {

	}

private:
	std::string regionName_;
	std::string description_;
	std::string connectedRegion_;
	std::vector<std::string> actions_;
	int regionLevel_;
	int countActions_;
};