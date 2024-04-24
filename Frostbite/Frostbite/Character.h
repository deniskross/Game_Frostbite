#pragma once
#include <iostream>
#include <string>
#include <cassert>

class Character {
public:
    int getHealthPoints() const {
        return healthPoints_;
    }
    void setHealthPoints(int value) {
        assert(value <= healthPointsMax_);
        healthPoints_ = value;
    }
    int getHealthPointsMax() const {
        return healthPointsMax_;
    }
    void setHealthPointsMax(int value) {
        healthPointsMax_ = value;
    }

    int getShieldPoints() const {
        return shieldPoints_;
    }
    void setShieldPoints(int value) {
        assert(value <= shieldPointsMax_);
        shieldPoints_ = value;
    }
    int getShieldPointsMax() const {
        return shieldPointsMax_;
    }
    void setShieldPointsMax(int value) {
        shieldPointsMax_ = value;
    }

    int getArmorPoints() const {
        return armorPoints_;
    }
    void setArmorPoints(int value) {
        assert(value <= armorPointsMax_);
        armorPoints_ = value;
    }
    int getArmorPointsMax() const {
        return  armorPointsMax_;
    }
    void setArmorPointsMax(int value) {
        armorPointsMax_ = value;
    }

    int getMagicShieldPoints() const {
        return magicShieldPoints_;
    }
    void setMagicShieldPoints(int value) {
        assert(value <= magicShieldPointsMax_);
        magicShieldPoints_ = value;
    }
    int getMagicShieldPointsMax() const {
        return  magicShieldPointsMax_;
    }
    void setMagicShieldPointsMax(int value) {
        magicShieldPointsMax_ = value;
    }

    int getActionAttackPoints() const {
        return actionAttackPoints_;
    }
    void setActionAttackPoints(int value) {
        assert(value <= actionAttackPointsMax_);
        actionAttackPoints_ = value;
    }
    int getActionAttackPointsMax() const {
        return  actionAttackPointsMax_;
    }
    void setActionAttackPointsMax(int value) {
        actionAttackPointsMax_ = value;
    }

    int getActionMovePoints() const {
        return  actionMovePoints_;
    }
    void setActionMovePoints(int value) {
        assert(value <= actionMovePointsMax_);
        actionMovePoints_ = value;
    }
    int getActionMovePointsMax() const {
        return actionMovePointsMax_;
    }
    void setActionMovePointsMax(int value) {
        actionMovePointsMax_ = value;
    }

    std::string getTypeOfWeaponWithBonus() const {
        return typeOfWeaponWithBonus_;
    }
    void setTypeOfWeaponWithBonus(std::string value) {
        typeOfWeaponWithBonus_ = value;
    }

    std::string getNameOfCharacter() const {
        return nameOfCharacter_;
    }
    void setNameOfCharacter(std::string value) {
        nameOfCharacter_ = value;
    }

private:
    int healthPoints_;
    int healthPointsMax_;
    int shieldPoints_;
    int shieldPointsMax_;
    int armorPoints_;
    int armorPointsMax_;
    int magicShieldPoints_;
    int magicShieldPointsMax_;
    int actionAttackPoints_;
    int actionAttackPointsMax_;
    int actionMovePoints_;
    int actionMovePointsMax_;
    std::string typeOfWeaponWithBonus_;
    std::string nameOfCharacter_;
};

class PlayerCharacter : public Character {

};

class BotCharacter : public Character {

};

class Huntsman : public PlayerCharacter {

};

class MagicalSwordswoman : public PlayerCharacter {

};

class AssaultShieldCarrier : public PlayerCharacter {

};

class MilitaryDoctor : public PlayerCharacter {

};

class Soldier : public PlayerCharacter {

};

class Sniper : public PlayerCharacter {

};