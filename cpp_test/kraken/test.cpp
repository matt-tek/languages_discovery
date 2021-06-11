#include <iostream>

class Weapon
{
private:
    std::string weaponName;
    int weaponAtk;
    int weaponDurability;
public:
    Weapon(std::string name, int atk, int durability);
    std::string getName() {
        return (weaponName);
    };
    ~Weapon();
};

Weapon::Weapon(std::string name, int atk, int durability)
{
    weaponName = name;
    weaponAtk = atk;
    weaponDurability = durability;
}

Weapon::~Weapon()
{
}

int main(void)
{
    std::cout << "choose your weapons" << std::endl;
    Weapon bow = Weapon("Arc", 15, 10);
}