#include <iostream> 
using namespace std; 
#include <string> 

template<typename T> T larger(T a, T b);

int main ()
{
    cout <<"Function template" << endl; 
    cout <<"Larger of 1.5 and 2.5 is" << larger(1.5, 2.5) << endl; 
    cout <<"Larger of A and B is" << larger(3.5, 4.5) << endl; 

    int big_int
    {
        17011983
    };

    int small_int
    {
        10 
    };

    cout <<"Larger of" << big_int <<"and" << small_int 
    <<"is" <<larger(big_int, small_int) << endl; 

    string a_string{"A"}; 
    string z_string{"z"}; 
    cout <<"larger of" << a_string <<"and" << z_string <<"is" 
    <<"" <<larger(a_string, z_string) <<"" << endl;

    return 0; 
}

// template for functions to return the larger of two values // 
template<typename T>
T larger(T a, T b)
{
    return a > b ? a:b; 
}