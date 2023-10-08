#include "Logement.h"

double Logement::getCotisation() const {
    return superficie * 1.1 + typologie * 50;
}

std::istream& operator>>(std::istream& input, Logement& logement) {
    input >> static_cast<Bien&>(logement) >> logement.superficie >> logement.typologie;
    return input;
}

std::string Logement::toString() const {
    char temp[100];
    sprintf(temp, "%lf", getCotisation());
    return Bien::toString() + " - Cotisation : " + temp;
}


