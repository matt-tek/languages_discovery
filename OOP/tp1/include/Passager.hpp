#pragma once
#include <string>

class Passager {
private:
    std::string nom;
    std::string siege;
    int id;
    int prix;
public:
    Passager(const std::string &nom, const std::string &siege, const int &id, const int &prix);
    ~Passager();
    void afficher_informations();

    const std::string &name() const;
    const int &id_passager() const;
};


