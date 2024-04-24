#include "Region.h"
#include <iostream>

void Region::interact() {
	std::cout << description_ << std::endl;

    std::vector<std::string> actionPull;
    for (int i = 0; i < countActions_; ++i)
    {
        actionPull.push_back(actions_[rand() % actions_.size()]);
        std::cout << actionPull[i] << std::endl;
        int chosenAction;

        std::vector<std::string> variants = { "Accept.", "Refuse.", "Check the inventory." };

        std::cout << "What would you choose?" << std::endl;
        for (int j = 0; j < variants.size(); ++j)
        {
            std::cout << j+1 << ". " << variants[j] << std::endl;
        }
        do {
            std::cin >> chosenAction;
        } while (chosenAction < 1 || chosenAction > variants.size());
    }
}