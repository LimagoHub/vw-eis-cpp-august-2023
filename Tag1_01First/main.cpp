#include <iostream>

// 1, Schritt Preprocessor
// 2 Compiler
// 3 Linker

#include "Peter.h"

// Ohne & void unter(int x) -> Parameterübergabe by Value d..h Wert wird in das Unterprogramm KOPIERT
// Mit & void unter(int &x) -> Parameterübergabe by Reference d.h. Wert wird in das Unterprogramm Nicht KOPIERT
// sonder a und X sind die selbe Variable


int maximal(int a, int b) {
    return a > b ? a:b;
}

void tausche(int &a, int &b){  // Analog zu swap
    int help = a;
    a = b;
    b = help;
}

void unter(int &x) {
    x = 100;
}

void ober() {
    int a = 10;

    unter(a);

    std::cout << a << std::endl;
}

int main() {

    int x =10;
    int y = 2000;

    tausche(x,y);

    std::cout << x << " " << y << std::endl;

    ober();


    return 0;
}


