#include "Passager.hpp"
#include "Vol.hpp"

int main(void) {
    Vol *vol1 = new Vol(1, 20);
    Vol *vol2 = new Vol(2, 30);

    // add ten passenger in vol1
    for (int i = 0; i < 10; i++) {
        Passager *passager = new Passager("Passager " + std::to_string(i), "A" + std::to_string(i), i, 100);
        vol1->ajouter_passager(*passager);
    }
    vol1->afficher_billets();
    return 0;
}