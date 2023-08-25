//
// Created by JoachimWagner on 24.08.2023.
//

#pragma once


#include <ostream>

class Punkt {

private:  // Zugriffsmodifier
    const double MAX{10.0};
    double x;
    double y;

    void setX(double x);

    void setY(double y);
public:

    Punkt(double x = 0, double y = 0);

    double getX() const;

    double getY() const;


    void rechts(double weite = 1); // Ueberladen (Anzahl oder Art der Parameter unterscheiden)
    void links();
    void oben();
    void unten();

    friend std::ostream &operator<<(std::ostream &os, const Punkt &punkt);
};
