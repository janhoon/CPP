//
// Created by Jan-hendrik HOON on 2017/05/26.
//

//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const &target) {
    std::cout << "FR4G-TP "
              << this->_name
              << " actually hit "
              << target
              << " with a ranged attack, it even caused "
              << _rDMG
              << " damage! \\|0o0|/"
              << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
    std::cout << "Enemy "
              << target
              << " tripped over FR4G-TP "
              << _name
              << "'s weapon and took "
              << _mDMG
              << " points of melee damage"
              << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    _HP -= (amount - _aDMGr);
    if (_HP < 0) {
        _HP = 0;
    }
    std::cout << "FR4G-TP "
              << _name
              <<" got REKT and lost "
              << amount - _aDMGr
              << " point of HP (Currnet HP is at: "
              << _HP
              << "%). Thank goodness for shield else it would have been "
              << amount
              << " HP lost"
              << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    _HP += (int)amount;
    if (_HP > _maxHP) {
        _HP = (unsigned int)_maxHP;
    }
    std::cout << _name << "\"Sweet life juice!\" (Health now at: " << _HP << "%)" << std::endl;
}

FragTrap::FragTrap() : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _lvl(1), _name("\"Insert name here\""),
                       _mDMG(30), _rDMG(20), _aDMGr(5) {
    std::cout << _name << ": \"Glitching weirdness is a term of endearment, right? Never mind there's just two of me now\"" << std::endl;
}

FragTrap::FragTrap(std::string name) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _lvl(1), _name(name),
                                       _mDMG(30), _rDMG(20), _aDMGr(5){
    std::cout << _name << ": \"Let's get this party started!\"" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << _name << ": \"Argh arghargh death gurgle gurglegurgle urgh... death.\"" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    this->_HP = rhs._HP;
    this->_EP = rhs._EP;
    this->_lvl = rhs._lvl;
    this->_name = rhs._name;
    return *this;
}

FragTrap::FragTrap(FragTrap const &claptrap) : _maxHP(100), _maxEP(100),  _mDMG(30),
                                               _rDMG(20), _aDMGr(5) {
    _lvl = claptrap._lvl;
    _EP = claptrap._EP;
    _HP = claptrap._HP;
    _name = claptrap._name;
    std::cout << _name << ": \"Glitching weirdness is a term of endearment, right? Never mind there's just two of me now\"" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string &target) {
    std::string attacks[] = {"Lonely Pizza Party!", "Steel Nuts!", "Longest wheel sling!", "Lightsaber!", "Mean Words!!"};
    if (_EP <= 0 && _EP < _maxEP) {
        _EP = 0;
        std::cout << _name
                  << ": \"Dangit, I'm out!\" (EP at 0%)"
                  << std::endl;
    } else {
        std::cout << _name
                  << " used special attack: "
                  << attacks[std::rand() % 5]
                  << " on "
                  << target
                  <<" (EP now at "
                  << _EP
                  << "%)"
                  << std::endl;
        _EP -= 25;
    }
}

