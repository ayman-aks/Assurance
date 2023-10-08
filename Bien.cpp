#include "Bien.h"

std::istream& operator>>(std::istream& input, Bien& bien) {
    input >> bien.numBien >> bien.denomination;
    return input;
}

std::string Bien::toString() const {
    return "  Bien : " + std::to_string(numBien) + " Denomination : " + denomination;
}
