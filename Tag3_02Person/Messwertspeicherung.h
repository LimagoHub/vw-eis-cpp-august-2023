//
// Created by JoachimWagner on 25.08.2023.
//

#pragma once
#include "iostream"

class Messwertspeicherung {

private:

    static constexpr unsigned ARRAY_SIZE = 1440;


    struct Messwert {
        //Messwert(): Wingeschwindigkeit(0), Windrichtung(0), Wassertemperatur(0){}
        unsigned Windrichtung;
        unsigned Wingeschwindigkeit;
        short Wassertemperatur;
    };

    Messwert  messwerte [ARRAY_SIZE];

public:
    Messwertspeicherung();

    void setWassertemperatur(unsigned  messwerteIndex, short neueTemperatur);
    short getWasserTemperatur(unsigned  messwerteIndex);
    short getMaxWassertemperatur();  // Funktionsprototype
};
