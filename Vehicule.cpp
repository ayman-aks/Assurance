#include "Vehicule.h"

double Vehicule::getCotisation() const {
    return (millesime - 1500) * 0.5 + puissanceFiscale * 10;
}

std::istream& operator>>(std::istream& input, Vehicule& vehicule) {
    input >> static_cast<Bien&>(vehicule) >> vehicule.puissanceFiscale >> vehicule.millesime;
    return input;
}

std::string Vehicule::toString() const {
    char temp[100];
    sprintf(temp, "%lf", getCotisation());
    return Bien::toString() + " - Cotisation : " + temp;
}

