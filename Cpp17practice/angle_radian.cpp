#include <iostream> 
using namespace std; 
#include <algorithm> 
#include <cmath> 

int main ()
{
    cout <<"Angle radian" << endl; 
    double angle {1.5}; 
    double cosine_value{
        cos(angle)
    }; 
    float angle_deg{60.0f}; 
    const float pi {3.1458265f}; 
    const float pi_degrees{180.0f}; 

    float tangent{tan(pi *angle_deg /pi_degrees)};

    double height {100.0};  // steeple height -feet // 
    double distance {50.0}; // Distance from base 
    double Angle{atan(distance/height)};
    // result in radian 

    double toe_to_tip{distance/sin(angle)}; 

    double Toe_to_tip{sqrt(pow(distance, 2) + pow(height, 2))}; 

    cout << "toe to tip" << toe_to_tip << endl; 
    cout <<"Toe to tip" << Toe_to_tip << endl; 

    cout << "angle degree:" << angle_deg << endl; 
    cout << "pi:" << pi << endl; 
    cout <<"pi_degrees" << pi_degrees << endl;

    cout <<"Tangent" << tangent << endl; 

    cout << "height:" << height << endl; 
    cout <<"Distance:" << distance << endl;
    cout << "angle:" << angle << endl;  
    cout <<"Angle:" << Angle << endl ;
    cout <<"Cosine values:" << cosine_value << endl; 

    return 0;
}