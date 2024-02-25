#include "Heure.hpp"

Heure::Heure(const int &heure, const int &minute, const int &seconde) {
    this->setHeure(heure);
    this->setMinute(minute);
    this->setSeconde(seconde);
}

void Heure::setHeure(const int &heure) {
    if (heure >= 0 && heure <= 23) {
        this->heure = heure;
    } else {
        this->heure = 0;
    }
}

void Heure::setMinute(const int &minute) {
    if (minute >= 0 && minute <= 59) {
        this->minute = minute;
    } else {
        this->minute = 0;
    }
}

void Heure::setSeconde(const int &seconde) {
    if (seconde >= 0 && seconde <= 59) {
        this->seconde = seconde;
    } else {
        this->seconde = 0;
    }
}

bool Heure::operator> (const Heure &other) {
    if (this->getHeure() > other.getHeure()) {
        return true;
    } else if (this->getHeure() == other.getHeure()) {
        if (this->getMinute() > other.getMinute()) {
            return true;
        } else if (this->getMinute() == other.getMinute()) {
            if (this->getSeconde() > other.getSeconde()) {
                return true;
            }
        }
    }
    return false;
}

void Heure::afficher() {
    std::cout << std::setw(2) << std::setfill('0') << this->getHeure() << ":" << std::setw(2) << std::setfill('0') << this->getMinute() << ":" << std::setw(2)<< std::setfill('0') << this->getSeconde() << std::endl;
}