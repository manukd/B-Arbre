//
// Created by Emmanuel DEREPAS on 21/02/2020.
//

#ifndef B_ARBRE_LABEL_H
#define B_ARBRE_LABEL_H

#include <string>

class label {
private:
    std::string key;
    float value;
public:
    label(const std::string &key, float value);

    const std::string &getKey() const;

    bool empty();

    float getValue() const;
};


#endif //B_ARBRE_LABEL_H
