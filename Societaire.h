#ifndef SOCIETAIRE_H
#define SOCIETAIRE_H

#include <iostream>
#include <string>
#include <list>
#include "Bien.h"

class Societaire {
private:
    int numSocietaire;
    std::string nom, prenom;
    std::list<Bien*> biens;

public:
    Societaire(int numSocietaire = 0) : numSocietaire(numSocietaire) {}
    ~Societaire() {
        for (Bien* bien : biens) {
            delete bien;
        }
    }
    int getNumSocietaire() { return numSocietaire; }
    std::string getNom() { return nom; }
    std::string getPrenom() { return prenom; }
    std::list<Bien*>& getbiens() { return biens; }
    friend std::istream& operator>>(std::istream& input, Societaire& societaire);
};

#endif
