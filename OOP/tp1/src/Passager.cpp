#include "Passager.hpp"
#include "Vol.hpp"
#include <iostream>
#include <vector>

Passager::Passager(const std::string &nom, const std::string &siege, const int &id, const int &prix) {
    this->nom = nom;
    this->siege = siege;
    this->id = id;
    this->prix = prix;
}

Passager::~Passager() {}

const std::string &Passager::name() const {
    return this->nom;
}

const int &Passager::id_passager() const {
    return this->id;
}

void Passager::afficher_informations() {
    std::cout << "Informations du passager:" << std::endl;
    std::cout << "Nom: " << this->nom << std::endl;
    std::cout << "Siege: " << this->siege << std::endl;
    std::cout << "ID: " << this->id << std::endl;
    std::cout << "Prix: " << this->prix << std::endl;
    std::cout << "=========================" << std::endl;
}



