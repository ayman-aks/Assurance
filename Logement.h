#ifndef LOGEMENT_H
#define LOGEMENT_H

#include "Bien.h"

class Logement : public Bien {
    double superficie;
    int typologie;

public:
    Logement(int numBien = 0, double _superficie = 0.0, int _typologie = 0)
        : Bien(numBien), superficie(_superficie), typologie(_typologie) {}
    ~Logement() {}
    double getCotisation() const override;
    friend std::istream& operator>>(std::istream& input, Logement& logement);
    std::string toString() const override;
};

#endif
