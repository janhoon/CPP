#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
    std::srand(time(NULL));
    FragTrap jan("jan");
    jan.takeDamage(20);
    FragTrap victor = jan;
    victor.takeDamage(10);
    jan.takeDamage(20);
    jan.rangedAttack("koos");
    victor.meleeAttack("koos");
    victor.beRepaired(1);
    jan.beRepaired(100);
    std::string koss = "koss";
    jan.vaulthunter_dot_exe(koss);
    jan.vaulthunter_dot_exe(koss);
    jan.vaulthunter_dot_exe(koss);
    jan.vaulthunter_dot_exe(koss);
    jan.vaulthunter_dot_exe(koss);

    ScavTrap koos("koos");
    koos.challengeNewcomer();
    koos.challengeNewcomer();
    koos.rangedAttack("newcomer");

    NinjaTrap jaco("jaco");
    jaco.ninjaShoebox(jan);
    jaco.ninjaShoebox(koos);
    jaco.ninjaShoebox(jaco);
}