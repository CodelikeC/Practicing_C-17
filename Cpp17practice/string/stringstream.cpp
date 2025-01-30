#include <iostream> 
using namespace std;
#include <iomanip> 
#include <sstream> 
#include <string> 
#include <vector> 

// Formatting using string streams // 
int main ()
{
    cout <<"String streams" << endl; 
    vector<double> values; 

    cout  <<"How many numbers fo you want to enter?" << endl; 
    size_t num{}; 
    cin >> num ; 

    for (size_t i{} ; i < num ; ++i)
    {
        double d ; 
        cin >> d ; 

        values.push_back(d); 
    }

    stringstream ss ; // create a new string stream // 
    for (size_t i {} ; i < num ; ++i )
    {
        ss << setprecision(4) << setw(7) << right << values[i] 
        << endl; 
        if ((i+1) % 5 == 0)
        ss << endl; 

        string s
        {
            ss.str()
        }; 
        cout << s << endl ; 
    }
    return 0 ; 
}
