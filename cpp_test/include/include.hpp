#include <iostream>

class Player {
private:
    std::string _namePlayer;
    std::string _playerClass;
    int _pvPlayer;
public:
    Player(std::string name, std::string pClass, int pv) {
        _namePlayer = name;
        _playerClass = pClass;
        _pvPlayer = pv; 
    };
    ~Player();
};

//Player::Player(std::string name, std::string playerClass, int pv)
//{
//    
//}
//
//Player::~Player()
//{
//}
