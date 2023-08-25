#include <iostream>

// Messwert (ort, Art ,Dimension, wert)

class Messwert {
private:
    std::string ort;
    std::string art;
    std::string dimension;
    double wert;

public:
    Messwert() : ort("Unbekannt"), art("Unbekannt"), dimension("unbekannt"), wert(0.0){}

    Messwert(const std::string &ort,
             const std::string &art,
             const std::string &dimension,
             double wert) : ort(ort),art(art),dimension(dimension),wert(wert) {}

    const std::string &getOrt() const {
        return ort;
    }

    void setOrt(const std::string &ort) {
        Messwert::ort = ort;
    }

    const std::string &getArt() const {
        return art;
    }

    void setArt(const std::string &art) {
        Messwert::art = art;
    }

    const std::string &getDimension() const {
        return dimension;
    }

    void setDimension(const std::string &dimension) {
        Messwert::dimension = dimension;
    }

    double getWert() const {
        return wert;
    }

    void setWert(double wert) {
        Messwert::wert = wert;
    }

    friend std::ostream &operator<<(std::ostream &os, const Messwert &messwert) {
        os << "ort: " << messwert.ort << " art: " << messwert.art << " dimension: " << messwert.dimension << " wert: "
           << messwert.wert;
        return os;
    }
};

int main() {


    Messwert messwerte[3];

    messwerte[0] = Messwert{"Salzgitter", "Temp", "Grad", 23.5};
    messwerte[1] = Messwert{"Wolfsburg", "Temp", "Grad", 24.5};
    messwerte[2] = Messwert{"Berlin", "Temp", "Grad", 24.3};

    for (int i = 0; i < 3; ++i) {
        std::cout << messwerte[i].getWert() << std::endl;
    }

    return 0;
}
