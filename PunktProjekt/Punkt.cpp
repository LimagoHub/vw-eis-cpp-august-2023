//
// Created by JoachimWagner on 24.08.2023.
//

#include "Punkt.h"



double Punkt::getX() const {
    return x;
}

double Punkt::getY() const {
    return y;
}

std::ostream &operator<<(std::ostream &os, const Punkt &punkt) {
    os << "x: " << punkt.x << " y: " << punkt.y;
    return os;
}

void Punkt::setX(double x) {
    if(x > MAX) x =MAX;
    if(x < -MAX) x = -MAX;
    Punkt::x = x;
}

void Punkt::setY(double y) {
    if(y > MAX) y =MAX;
    if(y < -MAX) y = -MAX;
    Punkt::y = y;
}



void Punkt::links() {
    setX( getX() - 1);
}

void Punkt::oben() {
    setY( getY() + 1);
}

void Punkt::unten() {
    setY( getY() - 1);
}

void Punkt::rechts(double weite) {
    setX( getX() + weite);
}

Punkt::Punkt(double x, double y) :x(x), y(y) {


}



