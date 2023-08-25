//
// Created by JoachimWagner on 25.08.2023.
//

#pragma once


#include <string>
#include <ostream>

class Planeten {

private:
    struct Planet {
        std::string name;
        unsigned masse;

        Planet(const std::string &name="", unsigned int masse= 0) : name(name), masse(masse) {}

        friend std::ostream &operator<<(std::ostream &os, const Planet &planet) {
            os << "name: " << planet.name << " masse: " << planet.masse;
            return os;
        }
    };

    Planet planetenFeld [8];

public:
    Planeten() ;

    void setPlanet(unsigned planetIndex, Planet planet);
    Planet getPlanet(unsigned planetIndex);

    Planet getSchwerstenPlanet();

};





