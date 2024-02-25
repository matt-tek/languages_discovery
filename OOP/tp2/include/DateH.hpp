#pragma once
#include "Date.hpp"
#include "Heure.hpp"

class DateH : public Date, public Heure {
    public:
        DateH(const int &jour, const int &mois, const int &annee, const int &heure, const int &minute, const int &seconde);
        void afficher();
        bool operator>(const DateH& other) const;
        Heure toHeure() const;
};
