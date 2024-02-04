#include "Passager.hpp"
#include "Vol.hpp"
#include <iostream>

int Vol::instance_count = 0;

int main(void) {
    Vol *vol1 = new Vol(1, 20);
    Vol *vol2 = new Vol(2, 30);

    // add ten passenger in vol1
    for (size_t i = 0; i < 10; i++) {
        Passager *passager = new Passager("Passager " + std::to_string(i), "A" + std::to_string(i), i, 100);
        vol1->ajouter_passager(*passager);
    }
    for (auto passager : vol1->lire_passagers()) {
        vol2->ajouter_passager(passager);
        vol1->annuler_billet(passager);
    }
    std::cout << "Vol 1:" << std::endl;
    vol1->afficher_billets();
    std::cout << "Vol 2:" << std::endl;
    vol2->afficher_billets();
    std::cout << "Nombre de vols: " << vol1->get_flight_count() << std::endl;
    delete vol1;
    delete vol2; 
    return 0;
}