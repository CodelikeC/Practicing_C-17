#include <iostream> 
using namespace std;
#include "third_box.h"

#include <string> 
#ifndef third_carton_h 
#define third_carton_h 

class Carton : public Box
{
    private:
    string material; 
    public: 
    // Constructors explicity calling the base class constructor 
    Carton (double lv, double wv, double hv, const string &str)
    : Box {lv, wv, hv}, material{str}{}

    // Function to calculate the volume of the carton // 
    double volume () const 
    {
        double vol = length * width * height; 
        return vol; 
    }
};

#endif 