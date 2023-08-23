#include <iostream>

#include "Schwein.h"


int main() {

    Schwein piggy;  // Automatisch wird auch der Konstruktor aufgerufen

    piggy.setName("Miss Piggy");

    piggy.drucken();
    piggy.fuettern();
    piggy.drucken();

    return 0;
}
