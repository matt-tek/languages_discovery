#include <iostream>
#include <random>

int main(void)
{
    std::string pseudo;
    int pvPlayer = 100;
    int pvKraken = 400;
    int atkPlayer = 50;
    int atkKraken = 10;

    std::cout << "Bienvenue à toi jeune combattant" << std::endl;
    std::cout << "Entre ton pseudo" << std::endl;
    std::cin >> pseudo;
    std::cout << "Welcome " << pseudo << std::endl;
    while (pvKraken > 0 && pvPlayer > 0) {
        std::random_device rd;
        std::uniform_int_distribution<int> dist(1, 6);
        if ((dist(rd) % 2) == 1)
            std::cout << "attack success, kraken pv = " << (pvKraken -= atkPlayer) << std::endl;
        if ((dist(rd) % 2) == 0)
            std::cout << "attack fail, player pv =" << (pvPlayer -= atkKraken) << std::endl;
        if (dist(rd) == 6) {
            std::cout << "unlucky x)... ";
            std::cout << "you have " << (pvPlayer -= atkKraken) << "pv" << std::endl;
        }
    }
    if (pvKraken <= 0)
        std::cout << "You win !" << std::endl;
    if (pvPlayer <= 0)
        std::cout << "you lose !" << std::endl;
}