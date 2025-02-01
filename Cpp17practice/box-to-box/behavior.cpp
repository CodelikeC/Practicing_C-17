#include <iostream>
using namespace std; 
#include "second_box.h"
#include "tough_pack.h"

int main ()
{
    Box box1{20.0, 30.0, 40.0}; 
    toughPack toughbox1{20.0, 30.0, 40.0};

    box1.showVolume(); // Display volume of base box // 
    toughbox1.showVolume(); // Display volume of derived box // 
    
    return 0 ; 
}