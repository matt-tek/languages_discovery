/*
** EPITECH PROJECT, 2021
** header
** File description:
** cpp header for testing class
*/

#include <string>
#include <iostream>

#ifndef PLAYER_HPP_
#define PLAYER_HPP_

class Player {
private:
    int _mana;
    int _pv;
    int _atk;
    std::string _weapon;
public:
    Player();
    void playerGetWeapon(std::string weaponType, int atk);
    void playerLostPv(int lp);
    void playerGainPv(int lp);
    void attack(Player target, Player attacker);
    bool playerAlive(void);
    int getPv(void)
    {
        return _pv;
    }
    int getAtk(void)
    {
        return _atk;
    }
    std::string getWeapon(void)
    {
        return _weapon;
    }
    ~Player();
};

std::ostream &operator<<(std::ostream &flux, Player &p);
#endif /* !INCLUDE_HPP_ */
