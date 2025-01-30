#include <iostream>
using namespace std; 
#include <iomanip>
#include <array> // for size() function // 
#include <string> 


void showData(const double data[], size_t count = 1 , string title = "Data Values", 
size_t width = 10, size_t perline = 5);

const double *largest(const double data[], size_t count); 
const double *smallest(const double data[], size_t count); 
double *shift_range(double data[], size_t count, double delta); 
double *scale_range(double data[], size_t count, double divisor); 
double *normalize_range(double data[], size_t count); 

int main ()
{
    double samples[]
    {
        11.0, 23.0, 13.0, 4.0,
        57.0, 36.0, 317.0, 88.0 , 
        9.0, 100.0, 121.0, 12.0 
    };

    const size_t count{
        size_t(samples)
    }; 
    showData(samples, count, "Original Values"); 
    normalize_range(samples, count); 
    showData(samples, count, "Normalized Values");

    return 0 ;
}

void showData(const double data[], size_t count, string title, size_t width, size_t perline)
{
    cout << title << endl; 
    for (size_t i{}; i< count ; ++i)
    {
        cout << setw(width) << data[i] ; 
        if ((i+1) % perline ==0)
        cout << endl; 
    }
    cout << endl; 
}