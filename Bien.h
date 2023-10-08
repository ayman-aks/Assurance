#ifndef BIEN_H
#define BIEN_H

#include <iostream>
#include <string>

class Bien {
private:
    int numBien;
    std::string denomination;

public:
    Bien(int numBien = 0) : numBien(numBien) {}
    virtual ~Bien() {}
    virtual double getCotisation() const = 0;
    int getNumBien() { return this->numBien; }
    friend std::istream& operator>>(std::istream& input, Bien& bien);
    virtual std::string toString() const = 0;
};

#endif
