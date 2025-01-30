// sorting an array in ascending sequence - using an indenfinite while loop 
// Using C++ 17 // 
#include <iostream> 
#include <iomanip> 
using namespace std; 

int main()
{
    cout <<"Sorting an array" << endl; 
    const size_t size{1000}; // array size // 
    double x[size] {}; // stores data to be sorted // 
    size_t count{}; // Number of values in array // 

    while(true)
    {
        double input{}; // Temporary store for a value // 
        cout <<"Enter a non-zero value, or 0 to end:" << endl; 
        cin >> input ; 
        if (input == 0)
        break; 
        
        x[count] = input ; 

        if (++count == size)
        {
            cout <<"Sorry, I can only store" << size << "values" <<endl; 
            break; 
        }

    }
    if (!count)
    {
        cout <<"Nothing to sort" << endl; 
        return 0 ; 
    }

    cout <<"Starting sort" << endl; 

    while (true)
    {
        bool swapped{false}; 
        // becomes true when not all values are in order // 
        for (size_t i {}; i < count ; ++i)
        {
            if (x[i] > x[i+1])
            {
                const auto temp = x[i]; 
                x[i] = x[i+1]; 
                x[i+1] = temp; 
                swapped  = true;
            }
        }
        if (!swapped)
        {
            break; // if there were no swaps // 
        }
    }
    cout <<"Your data in ascending sequence" << endl; 
    cout << fixed << setprecision(1); 

    const size_t perline{10}; 
    // Number output perline // 
    size_t n{} ; 
    // number on current line // 

    for (size_t i {}; i < count ; ++i)
    {
        cout << setw(8) << x[i]; 
        if (++n == perline)
        {
            cout << endl; 
            n = 0 ; // reset count on this line // 
        }
    }
    cout << endl; 
    return 0 ; 
}