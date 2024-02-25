#pragma once
#include <iostream>

class Date {
    protected:
        int jour;
        int mois;
        int annee;
    public:
        Date(const int &jour, const int &mois, const int &annee);
        ~Date() {};
        void afficher();
        void setJour(const int &jour);
        void setMois(const int &mois);
        void setAnnee(const int &annee);
        int getJour() const { return this->jour; };
        int getMois() const { return this->mois; };
        int getAnnee() const { return this->annee; };
};