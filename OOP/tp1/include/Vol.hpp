#pragma once
#include <vector>
#include "Passager.hpp"

class Vol {
private:
    int numero_vol;
    int capacite;
    std::vector<Passager> passagers;
    static int instance_count;
public:
    Vol(const int &numero_vol, const int &capacite);
    ~Vol();
    void afficher_billets();
    void ajouter_passager(const Passager &passager);
    void annuler_billet(const Passager &passager);
    
    // getters
    int nombre_passagers() const;
    int lire_numero_vol() const;
    std::vector<Passager> lire_passagers() const;
    static int get_flight_count() { return instance_count; };
    // setters
    void fixer_numero_vol(const int &numero_vol);
};
