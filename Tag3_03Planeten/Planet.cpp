//
// Created by JoachimWagner on 25.08.2023.
//

#include "Planeten.h"
Planeten::Planeten() {


    planetenFeld[0] = Planet{"Merkur", 1000};
    planetenFeld[1] = Planet{"Venus", 200};
    planetenFeld[2] = Planet{"Erde", 300};
    planetenFeld[3] = Planet{"Mars", 400};
    planetenFeld[4] = Planet{"Jupiter", 50000};
    planetenFeld[5] = Planet{"Saturn", 40000};
    planetenFeld[6] = Planet{"Uranus", 3000};
    planetenFeld[7] = Planet{"Neptun", 2000};
}

void Planeten::setPlanet(unsigned int planetIndex, Planeten::Planet planet) {
    planetenFeld[planetIndex] = planet;
}

Planeten::Planet Planeten::getPlanet(unsigned int planetIndex) {
    return planetenFeld[planetIndex];
}

Planeten::Planet Planeten::getSchwerstenPlanet() {
    Planet schwersterPlanet = planetenFeld[0];
    for (int i = 0; i < 8; ++i) {
        if(planetenFeld[i].masse > schwersterPlanet.masse){
            schwersterPlanet = planetenFeld[i];
        }
    }
    return schwersterPlanet;
}
