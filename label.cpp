//
// Created by Emmanuel DEREPAS on 21/02/2020.
//

#include "label.h"

label::label(const std::string &key, float value) : key(key), value(value) {}

bool label::empty() {
    if (this->key = "" && this->value = -1) {
        return true;
    } else {
        return false;
    }
}

const std::string &label::getKey() const {
    return key;
}

float label::getValue() const {
    return value;
}
