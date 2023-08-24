//
// Created by JoachimWagner on 23.08.2023.
//

#pragma once

// Definition im Headerfile

#include <string>
#include <ostream>

class Schwein {

private: // Zugriffsmodifier

    // Instanzvariablen
    int gewicht;
    std::string name;

public: // Zugriffsmodifier

    Schwein();

    int getGewicht() const;

    const std::string &getName() const;

    void setName(const std::string &name);

    void fuettern() ;

    friend std::ostream &operator<<(std::ostream &os, const Schwein &schwein);

};
