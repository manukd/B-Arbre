//
// Created by Emmanuel DEREPAS on 21/02/2020.
//

#ifndef B_ARBRE_DATABASE_H
#define B_ARBRE_DATABASE_H


#include "noeud.h"

class database {
private:
    noeud* racine;
    int hauteur;
public:
    database(noeud *racine);
    void addNode(noeud *node);
};


#endif //B_ARBRE_DATABASE_H
