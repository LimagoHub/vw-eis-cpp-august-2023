//
// Created by JoachimWagner on 23.08.2023.
//

#include <iostream>
#include "Schwein.h"


void Schwein::fuettern() {
    gewicht ++;
}

Schwein::Schwein(std::string name) : name(name), gewicht(5){
    std::cout << "Konstruktor von Schwein" << std::endl;

}

Schwein::~Schwein() {
    std::cout << "Quiiieeeeek!" << std::endl;
}


int Schwein::getGewicht() const {
    return gewicht;
}


const std::string &Schwein::getName() const {
    return name;
}

void Schwein::setName(const std::string &name) {
    if(name == "Elsa") {
        std::cout << "Name nicht erlaubt" << std::endl;
        return;
    }
    Schwein::name = name;
}

std::ostream &operator<<(std::ostream &os, const Schwein &schwein) {
    os << "gewicht: " << schwein.gewicht << " name: " << schwein.name;
    return os;
}




