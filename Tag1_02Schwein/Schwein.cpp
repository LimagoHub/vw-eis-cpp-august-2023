//
// Created by JoachimWagner on 23.08.2023.
//

#include <iostream>
#include "Schwein.h"


void Schwein::fuettern() {
    gewicht ++;
}


// Konstruktor
Schwein::Schwein() {
    name = "Nobody";
    gewicht = 10;
}

int Schwein::getGewicht() const {
    return gewicht;
}

const std::string &Schwein::getName() const {
    return name;
}

void Schwein::setName(const std::string &name) {
    if(name == "Elsa"){
        std::cout << "Name " << name << " ist nicht erlaubt" << std::endl;
        return;
    }
    Schwein::name = name;
}

void Schwein::drucken() {
    std::cout << "Dieses Schwein heisst " << getName()<< " und wiegt " << getGewicht() << std::endl;
}


