#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "Bien.h"
#include "Logement.h"
#include "Vehicule.h"
#include "Societaire.h"


int main() {
    std::ifstream file("data.txt");
    if (!file) {
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return 1;
    }

    std::list<Societaire*> societaires;
    Societaire* societaire = nullptr;
    std::string type;

    while (!file.eof()) {
        if (type == "Societaire") {
            societaire = new Societaire;
            file >> *societaire;
            societaires.push_back(societaire);
        } else if (type == "Vehicule") {
            Vehicule* vehicule = new Vehicule;
            file >> *vehicule;
            societaire->getbiens().push_back(vehicule);
        } else if (type == "Logement") {
            Logement* logement = new Logement;
            file >> *logement;
            societaire->getbiens().push_back(logement);
        }
        file >> type;
    }

    file.close();

    for (Societaire* societaire : societaires) {
        std::cout << "Societaire : " << societaire->getNumSocietaire() << " - " << societaire->getNom() << " " << societaire->getPrenom() << std::endl;
        for (Bien* bien : societaire->getbiens()) {
            std::cout << bien->getNumBien() << " Denomination : " << bien->toString() << std::endl;
        }
    }

    for (Societaire* societaire : societaires) {
        delete societaire;
    }

    return 0;
}
