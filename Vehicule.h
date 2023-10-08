#ifndef VEHICULE_H
#define VEHICULE_H

#include "Bien.h"

class Vehicule : public Bien {
    int puissanceFiscale;
    int millesime;

public:
    Vehicule(int numBien = 0, int _puissanceFiscale = 0, int _millesime = 0)
        : Bien(numBien), puissanceFiscale(_puissanceFiscale), millesime(_millesime) {}
    ~Vehicule() {}
    double getCotisation() const override;
    friend std::istream& operator>>(std::istream& input, Vehicule& vehicule);
    std::string toString() const override;
};

#endif
