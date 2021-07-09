#include <iostream>
#include "include/Player.hpp"

int main(void)
{
    Player toto;
    Player tata;

    toto.attack(tata, toto);
    tata.playerGainPv(50);
    toto.playerGetWeapon("lance", 30);
    toto.playerGetWeapon("axe", 40);
    tata.attack(toto, tata);
    std::cout << toto << std::endl;
}