#pragma once
#include <iostream>
#include<iomanip>

class Heure {
    protected:
        int heure;
        int minute;
        int seconde;
    public:
        Heure(const int &heure, const int &minute, const int &seconde);
        ~Heure() {};
        void afficher();

        void setHeure(const int &heure);
        void setMinute(const int &minute);
        void setSeconde(const int &seconde);

        int getHeure() const { return this->heure; };
        int getMinute() const { return this->minute; };
        int getSeconde() const { return this->seconde; };

        bool operator> (const Heure &other);
};
