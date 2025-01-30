#include <iostream> 
using namespace std ; 

#include <iomanip> 

int main()
{
    const double pi{3.145926538979323846}; 
    // the famous pi 
    const size_t perline {3}; 
    // outputs per line // 
    size_t linecount{}; 
    // count of output line // 
    for (double radius{0.2}; radius <= 3.0 ; radius +=0.2)
    {
        cout << fixed << setprecision(2)
        <<"Radius= " << setw(5) << radius 
        << "area = " << setw(6) << pi *radius *radius <<endl; 

        if (perline == ++ linecount)
        {
            cout << endl; // start a new line // 
            linecount = 0 ; 
            // all reset the line counter // 
        }
    }
    cout << endl; 
    return 0 ; 
}