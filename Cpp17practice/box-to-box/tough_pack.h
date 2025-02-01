#include <iostream> 
using namespace std;
#include "second_box.h"

#ifndef TOUGH_PACK_H 
#define TOUGH_PACK_H
class toughPack : public Box 
{
    public : 
    // constructor // 
    toughPack(double lv, double vw, double hv) 
    : Box{lv, vw,hv}{}

    // function to calculate volume of the box // 
    double volume () const 
    {
        return 0.85 * length * width * height; 
    }
};

#endif 