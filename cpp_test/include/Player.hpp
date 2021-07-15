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
    void setWeapon(std::string &weaponType, int &atk);
    void lostPv(int &lp);
    void gainPv(int &lp);
    void attack(Player &target);
    bool Alive(void);
    int getPv(void) { return _pv; }
    int getAtk(void) { return _atk; }
    int getMana(void) {return _mana; }
    std::string getWeapon(void) { return _weapon; }
    ~Player();
};

std::ostream &operator<<(std::ostream &flux, Player &p);
#endif /* !INCLUDE_HPP_ */
