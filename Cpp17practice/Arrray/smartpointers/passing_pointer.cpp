#include <iostream> 
using namespace std; 
#include <iomanip> 

double changeIT(double *pit); 
// Function prototype // 

int main ()
{
    double it{5.0}; 
    double result{changeIT(&it)}; 
    // now we pass the address ... // 
    cout <<"After function execution, it =" 
    << it <<"Result returned is" << result << endl; 

    return 0;
}

// function to modify an arguement and return it // 
double changeIT(double *pit)
{
    *pit += 10 ; // this modifies the original double / / 
    cout <<"Within function, *pit =" << *pit << endl; 
    return *pit;
}