//
// Created by JoachimWagner on 24.08.2023.
//

#pragma once


class Windgenerator {

private:

    unsigned drehzahl;

public:

    Windgenerator() :drehzahl(25){

    }

    unsigned int getDrehzahl() const {
        return drehzahl;
    }

    bool Drehzahl3040() {
        return drehzahl >= 30 && drehzahl <= 40;

    }

};
