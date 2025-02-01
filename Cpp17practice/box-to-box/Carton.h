#include <iostream> 
using namespace std;
#include <string> 
#include <iomanip> 
#include "box.h"

#ifndef Carton_H
#define Carton_H
class Carton
{
    private: 
    string material;

    public: 
    explicit Carton(string mat = "CardBoard" )
    : material{mat} {}// constructor //  
    double volume() const 
    {
       
    }

    double getLength()
    {

    }
};

#endif