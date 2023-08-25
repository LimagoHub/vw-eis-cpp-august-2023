#include <iostream>
#include "Punkt.h"

using namespace std;

int main() {

    Punkt p{3, 4};


    cout << p << endl;

    for (int i = 0; i < 15; ++i) {
        p.rechts(1.4);
        cout << p << endl;
    }

    return 0;
}
