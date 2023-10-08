#include "Societaire.h"

std::istream& operator>>(std::istream& input, Societaire& societaire) {
    input >> societaire.numSocietaire >> societaire.nom >> societaire.prenom;
    return input;
}