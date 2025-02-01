#include <iostream> 
using namespace std; 
#include <string> 
#include <algorithm> 

#ifndef BOX_H 
#define BOX_H

#include <iomanip> 

class Box
{
    private: 
    double length{1.0}; 
    double width{1.0}; 
    double height{1.0}; 

    public : 
    // constructors // 
    Box(double lv, double vw, double hv) : length{lv}, width{vw}, height {hv}{}
    Box() = default;  

    double volume() const 
    {
        return width * height * length; 
    }

    double getLength() const 
    {
        return length;
    }
    double getWidth () const 
    {
        return width; 
    }

    double getheight() const 
    {
        return height;
    }
};

// stream output for Box operators // 
inline ostream& operator <<(ostream& stream, const Box& box)
{
    stream <<"Box(" << setw(2) << box.getLength() << ","
    << setw(2) << box.getWidth() << ","
    << setw(2) << box.getheight() << ")" << endl; 

    return stream;
}

#endif 