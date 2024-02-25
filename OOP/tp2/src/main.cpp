#include "Heure.hpp"
#include "Date.hpp"
#include "DateH.hpp"

int main(void) {
    Heure h1 = Heure(12, 30, 70);
    Heure h2 = Heure(13, 65, 50);
    Date d1 = Date(24, 12, 2020);
    Date d2 = Date(13, 9, 2030);

    // true
    DateH dh1 = DateH(24, 12, 2020, 12, 30, 36);
    DateH dh2 = DateH(18, 10, 1956, 13, 58, 50);

    // false
    DateH dh3 = DateH(24, 12, 2020, 1, 30, 36);
    DateH dh4 = DateH(24, 12, 2020, 12, 58, 50);

    // more tests
    DateH j1 = DateH(1, 1, 2020, 0, 0, 0);
    DateH j2 = DateH(31, 12, 2019, 23, 59, 59);

    std::cout << "Test Heure :" << std::endl;
    h1.afficher();
    h2.afficher();
    std::cout << "h1 > h2 : " << std::boolalpha << (h1 > h2) << std::endl;
    std::cout << "h2 > h1 : " << std::boolalpha << (h2 > h1) << std::endl;

    std::cout << "Test Date :" << std::endl;
    d1.afficher();
    d2.afficher();

    std::cout << "Test DateH :" << std::endl;
    std::cout << "DateH 1 : ";
    dh1.afficher();
    std::cout << "DateH 2 : ";
    dh2.afficher();
    std::cout << "DateH 3 : ";
    dh3.afficher();
    std::cout << "DateH 4 : ";
    dh4.afficher();
    std::cout << "dh1 > dh2 : " << std::boolalpha << (dh1 > dh2) << std::endl;
    std::cout << "dh3 > dh4 : " << std::boolalpha << (dh3 > dh4) << std::endl;
    
    Heure h3 = dh1.toHeure();
    Heure h4 = dh2.toHeure();
    std::cout << "j1 > j2 : " << std::boolalpha << (j1 > j2) << std::endl;
    std::cout << "heure de j2 > heure de j1 : " << std::boolalpha << (h3 > h4) << std::endl;
    return 0;
}