#pragma once
#include "shop.h"

class bershka : public shop {
public:
    bershka() : shop(35) {};

    void print() override {
        cout << "bill\n";
        cout << "----------------------\n";
        cout << "Bershka\n";
        cout << "discount: " << discount << "%\n";
    }
};
