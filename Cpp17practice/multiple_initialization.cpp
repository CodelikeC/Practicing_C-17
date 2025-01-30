#include <iostream> 
using namespace std; 
#include <iomanip> 

int main ()
{
    unsigned int limit{}; 
    cout <<"This program calculates n! and the sum of the integers" 
    << "Up to n for values 1 to limit" << endl; 
    cout <<"What upper limit for n would you like?" << endl; 
    cin >> limit ; 

    // output column headings // 
    cout << setw(8) <<"integer" << setw(8) <<"sum"
    << setw(20) << "factorial" << endl; 

    for (unsigned long long n {1}, sum {}, factorial{1} ; n <= limit ; ++n)
    {
        sum+= n; // Accumulate sum to current n // 
        factorial *= n ; // Calculate n! for current n / / 
        cout << setw(8) << n << setw(8) << sum 
        << setw(20) << factorial << endl; 
    
    }  
    return 0 ;  
}