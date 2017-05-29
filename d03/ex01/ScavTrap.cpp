//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const &target) {
    std::cout << "SC4V-TP "
              << this->_name
              << " managed shoot "
              << target
              << " for a total of "
              << _rDMG
              << " hit points! \\(0o0)/"
              << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
    std::cout << "Enemy "
              << target
              << " ran into SC4V-TP "
              << _name
              << " and took "
              << _mDMG
              << " points of melee damage"
              << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    _HP -= (amount - _aDMGr);
    if (_HP < 0) {
        _HP = 0;
    }
    std::cout << "SC4V-TP "
              << _name
              <<" fell over a pebble and lost "
              << amount - _aDMGr
              << " point of HP (Currnet HP is at: "
              << _HP
              << "%). Good guy shield else it might have been "
              << amount
              << " HP lost"
              << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    _HP += (int)amount;
    if (_HP > _maxHP && _EP < _maxEP) {
        _HP = (unsigned int)_maxHP;
    }
    std::cout << _name << "\"Sweet life juice!\" (Health now at: " << _HP << "%)" << std::endl;
}

ScavTrap::ScavTrap() : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _lvl(1), _name("\"Insert name here\""),
                       _mDMG(30), _rDMG(20), _aDMGr(5) {
    std::cout << _name << ": \"This time it'll be awesome, I promise!\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _lvl(1), _name(name),
                                       _mDMG(30), _rDMG(20), _aDMGr(5) {
    std::cout << _name << ": \"Hey everybody! Check out my package!\"" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << _name << ": \"Why oh why cruel world!?!?!?\"" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
    this->_HP = rhs._HP;
    this->_EP = rhs._EP;
    this->_lvl = rhs._lvl;
    this->_name = rhs._name;
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const &claptrap) : _maxHP(100), _maxEP(100),  _mDMG(30),
                                               _rDMG(20), _aDMGr(5) {
    _lvl = claptrap._lvl;
    _EP = claptrap._EP;
    _HP = claptrap._HP;
    _name = claptrap._name;
    std::cout << _name << ": \"This time it'll be awesome, I promise!\"" << std::endl;
}

void ScavTrap::challengeNewcomer() {
    std::string challenges[] = {
            "see who can count to ten the fastest!",
            "to answer how many fingers he is holding behind his back",
            "lick his own elbow",
            "to answer how many wood could a wood chuck chuck if a would chuck could chuck wood",
            "dance off!"
    };
    std::cout << _name
              << " challenged a newcomer to "
              << challenges[std::rand() % 5]
              << std::endl;
}