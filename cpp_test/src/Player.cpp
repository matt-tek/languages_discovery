#include <iostream>
#include "../include/Player.hpp"

Player::Player()
{
    _mana = 100;
    _pv = 100;
    _atk = 10;
    _weapon = "sword";
}

Player::~Player()
{
}

void Player::gainPv(int &pv)
{
    _pv += pv;
}

void Player::lostPv(int &damage)
{
    _pv -= damage;
    if (_pv <= 0)
        _pv = 0;
}

void Player::setWeapon(std::string &weapon, int &atk)
{
    _weapon = weapon;
    _atk = atk;
}

void Player::attack(Player &target)
{
    target.lostPv(_atk);
}

bool Player::Alive()
{
    if (_pv > 0)
        return true;
    else
        return false;
    return true;
}

std::ostream &operator<<(std::ostream &flux, Player &p)
{
    flux << "pv = " << p.getPv() << " atk = " << p.getAtk() << " and weapon = " << p.getWeapon();
    return (flux);
}