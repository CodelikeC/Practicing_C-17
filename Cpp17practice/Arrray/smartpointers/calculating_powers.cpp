#include <iostream> 
using namespace std; 
#include <iomanip> 
#include <cmath> 

double power(double x , int n )
{
    double result{1.0}; 
    if (n>= 0)
    {
        for (int i {1} ; i <= n ; ++i)
        {
            result *= x; 
        }
    }
    else 
    {
        // n < 0 // 
        for (int i{1}; i <= -n ; ++i)
        {
            result/= x ; 
        }
         
    }
    return result; 
}

int main ()
{
    // Calculate powers of 8 from - 3 to + 3 // 
    for (int i {-3} ; i <=3 ; ++i)
    {
        cout <<"Setw(10) :" << setw(10)
        <<"Power(8.0, i) : " << power(8.0, i)
        ; 

        cout << endl; 
    }
    return 0; 
}