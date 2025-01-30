#include <iostream> 
using namespace std; 
#include <limits>

int main ()
{
    cout <<"The range for type short is from" 
    << numeric_limits<short> :: min() << "to"
    << numeric_limits<short> :: max() << endl; 

    cout <<"The range for type integer is from" 
    << numeric_limits <int> :: min () << "to"
    << numeric_limits<int> ::max() << endl; 

    cout <<"The range for double is from"
    << numeric_limits <double> :: min() <<"to"
    << numeric_limits<double> :: max() << endl;

    cout <<"The range for char is from" 
    << numeric_limits<char> :: min() <<"to"
    << numeric_limits<char> :: max() <<endl; 

    cout <<"The range for long double" 
    << numeric_limits<long double> :: min() <<"to"
    << numeric_limits<long double> ::max() << endl; 
    return 0 ;
}