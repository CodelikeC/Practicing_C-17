#include <iostream> 
using namespace std ; 
#include "box.h"
#include "Carton.h"

int main()
{
    // Create a Box object and two Carton objects // 
    Box box{40.0, 30.0, 20.0}; 
    Carton carton;
    Carton chocolateCarton{"Solid bleached paperboard"};
    // Check them out - sizes first of all ... // 
    cout <<"Box occupies" << sizeof box <<"bytes" << endl ; 
    cout <<"carton occupies" << sizeof carton << "bytes" << endl;
    cout <<"CandyCarton occupies" << sizeof chocolateCarton << "Bytes" << endl; 

    // Now Volumes // 
    cout << "Box volume is" << box.volume() << endl;
    cout <<"Carton volume is" << carton.volume() << endl; 
    cout <<"ChocolateCarton volume is" << chocolateCarton.volume() << endl;
    cout <<"ChocolateCarton length is" << chocolateCarton.getLength() << endl; 
    
    return 0; 
}