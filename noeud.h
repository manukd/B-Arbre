//
// Created by Emmanuel DEREPAS on 17/02/2020.
//
#include "string"
#include "label.h"

#ifndef B_ARBRE_NOEUD_H
#define B_ARBRE_NOEUD_H

class noeud {
private:
    label nodeLabel[2];
    noeud* parent;
    noeud* left;
    noeud* mid;
    noeud* right;
public:
    noeud(noeud *parent, label firstLabel);
    void addLabel(label newLabel);
    label adaptTree(label newLabel);
};


#endif //B_ARBRE_NOEUD_H
