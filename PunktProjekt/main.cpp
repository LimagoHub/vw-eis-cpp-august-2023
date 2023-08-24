#include <iostream>
#include "Punkt.h"

using namespace std;

int main() {

    Punkt p;
    cout << p << endl;

    for (int i = 0; i < 15; ++i) {
        p.rechts();
        cout << p << endl;
    }

    return 0;
}
