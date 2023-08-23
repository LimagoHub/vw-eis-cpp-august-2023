//
// Created by JoachimWagner on 23.08.2023.
//

#pragma once

// Definition im Headerfile

#include <string>

class Schwein {

private:

    // Instanzvariablen
    int gewicht;
    std::string name;

public:
    // Konstruktor belegt die Instanzvariablen mit sinnvollen Startwerten
    Schwein();

    // Getter und Setter (Ermoeglichen die Kontrolle ueber unsere Variablen)
    const std::string &getName() const;

    void setName(const std::string &name);

    int getGewicht() const;

    // Fachliche Methoden

    void fuettern() ;

    void drucken();

};
