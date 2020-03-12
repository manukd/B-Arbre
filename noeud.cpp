//
// Created by Emmanuel DEREPAS on 17/02/2020.
//

#include "noeud.h"

noeud::noeud(noeud *parent, label firstLabel) : parent(parent) {
    this->nodeLabel[0] = firstLabel;
    label *temp = new label("",-1);
    this->nodeLabel[1] = *temp;
    this->left = nullptr;
    this->mid = nullptr;
    this->right = nullptr;
}

void noeud::addLabel(label newLabel) {
    if(this->nodeLabel[0].empty()) {
        this->nodeLabel[0] = newLabel;
    } else if (this->nodeLabel[1].getKey() == "") {
        this->nodeLabel[1] = newLabel;
    } else {
        this->nodeLabel[0] = this->adaptTree(newLabel);

        /*if (newLabel.getKey() < this->nodeLabel[0].getKey()) {
            if (this->left == nullptr) {
                this->left = new noeud(this, newLabel);
            } else {
                this->left->addLabel(newLabel);
            }
        } else if (this->right != nullptr) {
            if (this->nodeLabel[0].getKey() < newLabel.getKey() && newLabel.getKey() < this->nodeLabel[1].getKey()) {
                if (this->mid == nullptr) {
                    this->mid = new noeud(this, newLabel);
                } else {
                    this->mid->addLabel(newLabel);
                }
            }
        } else {
            if (this->right == nullptr) {
                this->right = new noeud(this, newLabel);
            } else {
                this->right->addLabel(newLabel);
            }
        }*/
    }

}

label noeud::adaptTree(label newLabel) {
    label res = label("null",-1);
    if (newLabel.getValue() < this->nodeLabel[1].getValue() && this->nodeLabel[0].getValue() < newLabel.getValue()) {
        this->left = new noeud(this, this->nodeLabel[0]);
        this->right = new noeud(this, this->nodeLabel[1]);
        this->nodeLabel[0] = newLabel;
        label *temp = new label("",-1);
        this->nodeLabel[1] = *temp;
    } else if (this->nodeLabel[1].getValue() < this->nodeLabel[0].getValue()) {
        this->left = new noeud(this, newLabel);
        this->right = new noeud(this, this->nodeLabel[0]);
        this->nodeLabel[0] = this->nodeLabel[1];
        label *temp = new label("",-1);
        this->nodeLabel[1] = *temp;

        res = this->nodeLabel[1];
    } else if () {
        res = this->nodeLabel[0];
    }
    return res;
}
