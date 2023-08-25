//
// Created by JoachimWagner on 25.08.2023.
//

#include "Messwertspeicherung.h"

Messwertspeicherung::Messwertspeicherung() {
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        messwerte[i].Wassertemperatur = 0;
        messwerte[i].Windrichtung = 0;
        messwerte[i].Windrichtung = 0;
    }
}

void Messwertspeicherung::setWassertemperatur(unsigned int messwerteIndex, short neueTemperatur) {

    messwerte[messwerteIndex].Wassertemperatur = neueTemperatur;
}

short Messwertspeicherung::getWasserTemperatur(unsigned int messwerteIndex) {
    return messwerte[messwerteIndex].Wassertemperatur;
}


// Funktionsdefinition
short Messwertspeicherung::getMaxWassertemperatur() {
    short max = messwerte[0].Wassertemperatur;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if(messwerte[i].Wassertemperatur > max) {
            max = messwerte[i].Wassertemperatur;
        }
    }
    return max;
}


