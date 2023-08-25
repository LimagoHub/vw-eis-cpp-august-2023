#include <iostream>
#include "Messwertspeicherung.h"

using namespace std;

int main() {
    Messwertspeicherung m;

    m.setWassertemperatur(499, 20);
    m.setWassertemperatur(69, 23);
    m.setWassertemperatur(3, 50);

    // Funktionsaufruf
    cout << m.getMaxWassertemperatur() << endl;

    return 0;
}
