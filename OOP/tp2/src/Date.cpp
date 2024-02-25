#include "Date.hpp"

Date::Date(const int &jour, const int &mois, const int &annee) {
    if (mois == 2) {
        if (jour > 28 || jour < 0) {
            this->jour = 0;
            this->mois = mois;
            this->annee = annee;
        } else {
            this->jour = jour;
            this->mois = mois;
            this->annee = annee;
        }
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        if (jour > 30 || jour < 0) {
            this->jour = 0;
            this->mois = mois;
            this->annee = annee;
        } else {
            this->jour = jour;
            this->mois = mois;
            this->annee = annee;
        }
    } else if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12){
        if (jour <= 31 && jour >= 0){
            this->jour = jour;
            this->mois = mois;
            this->annee = annee;
        } else {
            this->jour = 0;
            this->mois = mois;
            this->annee = annee;
        }
    }
}

void Date::afficher() {
    std::cout << this->jour << "/" << this->mois << "/" << this->annee << std::endl;
}