#include <iostream> 
using namespace std; 
#include <string> 

#ifndef SECOND_BOX_H
#define SECOND_BOX_H

class Box
{
    protected: 
    double length{1.0}; 
    double width = 1.0;
    double height = 1.0; 

    public:
    // constructors // 
    Box() = default;
    Box(double lv, double vw, double hv)
    : length{lv}, width{vw}, height{hv}{}

    // function to show the function of the box // 
    void showVolume() const 
    {
        cout <<"Box usable volume is:" << volume() << endl; 

    }

    double volume() const 
    {
        return width *height * length;
    }
}; 

#endif 