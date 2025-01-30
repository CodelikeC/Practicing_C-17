#include <iostream> 
using namespace std;

#include <string>

using std :: string; 

template<typename T, size_t N>
T average(const T (&array)[N]); 

int main ()
{
    double doubles[2]{1.0, 2.0}; 
    cout <<average(doubles) << endl; 

    double moreDouble[]{1.0, 2.0, 3.0, 4.0}; 
    cout <<average(moreDouble) << endl; 

    cout <<average({1.0,2.0,3.0,4.0}) << endl; 

    int ints[]{1,2,3,4}; 
    cout << average(ints) << endl; 

    return 0; 
}