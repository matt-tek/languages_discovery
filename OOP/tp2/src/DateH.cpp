#include "DateH.hpp"

DateH::DateH(const int &jour, const int &mois, const int &annee, const int &heure, const int &minute, const int &seconde) : Date(jour, mois, annee), Heure(heure, minute, seconde) {}

void DateH::afficher() {
    std::cout << this->getJour() << "/" << this->getMois() << "/" << this->getAnnee() << " " << std::setw(2) << std::setfill('0') << this->getHeure() << ":" << std::setw(2) << std::setfill('0') << this->getMinute() << ":" << std::setw(2)<< std::setfill('0') << this->getSeconde() << std::endl;
}

bool DateH::operator>(const DateH& other) const {
    // std::cout << other.getAnnee() << " > " << this->getAnnee() << std::endl;
    if (this->annee != other.annee) {
        return annee > other.annee;
    } else if (mois != other.mois) {
        return mois > other.mois;
    } else if (jour != other.jour) {
        return jour > other.jour;
    } else if (heure != other.heure) {
        return heure > other.heure;
    } else if (minute != other.minute) {
        return minute > other.minute;
    } else {
        return seconde > other.seconde;
    }
}

Heure DateH::toHeure() const {
    return Heure(this->heure, this->minute, this->seconde);
}