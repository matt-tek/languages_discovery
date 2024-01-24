#include "Vol.hpp"
#include "Passager.hpp"
#include <iostream>

Vol::Vol(const int &numero_vol, const int &capacite) {
    this->numero_vol = numero_vol;
    this->capacite = capacite;
}

Vol::~Vol(){}

void Vol::afficher_billets() {
    for (auto passager : this->passagers) {
        passager.afficher_informations();
    }
}

void Vol::ajouter_passager(const Passager &passager) {
    if (this->passagers.size() < this->capacite) {
        this->passagers.push_back(passager);
    } else {
        std::cout << "Le vol est plein!" << std::endl;
    }
}

void Vol::annuler_billet(const Passager &passager) {
    for (size_t i = 0; i < this->passagers.size(); i++) {
        if (this->passagers[i].id_passager() == passager.id_passager()) {
            this->passagers.erase(this->passagers.begin() + i);
        }
    }
}

int Vol::nombre_passagers() const {
    return this->passagers.size();
}

int Vol::lire_numero_vol() const {
    return this->numero_vol;
}

std::vector<Passager> Vol::lire_passagers() const {
    return this->passagers;
}

void Vol::fixer_numero_vol(const int &numero_vol) {
    this->numero_vol = numero_vol;
}
