#include <iostream>
#include <string>
#include "include/Player.hpp"

void loadWeapon(Player &player, std::string &input)
{
    const std::string lance = "lance";
    const std::string axe = "axe";
    const std::string bow = "bow";
    int lance_atk = 20;
    int bow_atk = 25;
    int axe_atk = 30;

    if (lance.compare(input) == 0)
        player.setWeapon(input, lance_atk);
    if (axe.compare(input) == 0)
        player.setWeapon(input, axe_atk);
    if (bow.compare(input) == 0)
        player.setWeapon(input, bow_atk);
    
}
int main(void)
{
    Player player;
    Player enemy;
    std::string weapon;
    std::string input;


    std::cout << "Hello ! Please select your weapon" << std::endl;
    std::cout << "You can have [lance, axe, bow] : ";
    std::cin >> weapon;
    loadWeapon(player, weapon);
    while (enemy.Alive()) {
        std::cout << "Do you attack or defend ??" << std::endl;
        std::cin >> input;
        if (input.compare("attack") == 0) {  
            player.attack(enemy);
            enemy.attack(player);
            std::cout << "you have " << player.getPv() << " lp" << std::endl; 
        }
        if (input.compare("defend") == 0) {
            enemy.attack(player);
            std::cout << "you have " << player.getPv() << " lp" << std::endl;
        }
        if (!player.Alive()) {
            std::cout << "You Lose !" << std::endl;
            return (84);
        }
    }
    std::cout << "You Win !" << std::endl;
    std::cout << player << std::endl;
    std::cout << enemy << std::endl;
}