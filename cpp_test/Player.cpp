#include <iostream>
#include "include/Player.hpp"

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

void Player::playerGainPv(int pv)
{
    _pv += pv;
}

void Player::playerLostPv(int damage)
{
    _pv -= damage;
    if (_pv <= 0)
        _pv = 0;
}

void Player::playerGetWeapon(std::string weapon, int atk)
{
    _weapon = weapon;
    _atk = atk;
}

void Player::attack(Player target, Player attacker)
{
    target.playerLostPv(attacker._atk);
}

bool Player::playerAlive()
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