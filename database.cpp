//
// Created by Emmanuel DEREPAS on 21/02/2020.
//

#include "database.h"

database::database(noeud *racine) : racine(racine) {}

void database::addNode(noeud *node) {
    noeud *temp = this->racine;
    for (int i = 0; i < this->hauteur; ++i) {
        if(temp->getKey() < node->getKey()) {
            if (i == hauteur) {
                temp->setRight(node);
            } else {
                temp = temp->getRight();
            }
        } else if (temp->getKey() > node->getKey()) {
            if (i == hauteur) {
                temp->setLeft(node);
            } else {
                temp = temp->getLeft();
            }
        }
    }
}
