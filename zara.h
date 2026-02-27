#include "shop.h"
#pragma once

class zara: public  shop{
    public:
    zara(): shop(20){};
    void print(){
        cout<<"    bill\n";
        cout<<"------_________------------\n";
        cout<<"Zara\n";
        cout<<"discount: "<<discount<<"%\n";
    }
};