#include <iostream> 
using namespace std; 
#include <string> 

#include "third_box.h"
#include "third_carton.h"
#include "third_though_pack.h"

int main ()
{
    Box box1{20.0, 30.0, 40.0}; 
    Carton carton1 {20.0, 30.0, 40.0,"plastic"};
    toughPack pack1{20.0, 30.0, 40.0};

    carton1.showVolume();
    box1.showVolume(); 
    pack1.showVolume();

    // Now using base pointer to derived class object // 
    Box*pbox{&box1};
    cout <<"Volume of box1 is:" << pbox -> volume() << endl; 
    pbox -> showVolume(); 

    pbox = &carton1; 
    cout <<"Volume of Carton1 is:" << pbox -> volume() << endl; 
    pbox -> showVolume(); 

    pbox = &pack1;
    cout <<"Volume of pack1 is:" << pbox -> volume() << endl; 
    pbox-> showVolume();
    
    return 0 ;
}
