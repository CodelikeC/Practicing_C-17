#include <iostream> 
#include <iomanip>
#include <cctype> 

using namespace std; 

int main ()
{
    size_t table {}; // table size 
    const size_t table_min{2}; // minimum table size - at least up to the 2 times // 
    const size_t table_max{12}; // Maximum table size .. 
    char reply{}; 
    // response to prompt // 
    do 
    {
        cout <<"What size table would you like("
        << table_min << "to"  << table_max <<")"; 
        cin >> table;
        cout << endl ; 

        // Make sure table size is within the limits // 
        if (table < table_min or table > table_max){
            cout <<"Invalid table size entered. Program terminated" << endl; 
            return 1 ; 
        }
        // create the top line of the table // 
        cout << setw(6) << "|" << endl; 
        for (size_t i {1} ; i <= table ; ++i)
        {
            cout << "-------" << endl; 
        }

        cout << endl; 

        for (size_t i {i} ; i <= table ; ++i)
        {
            // iterate over rows //
            cout <<"" << setw(3) << i << "|" ; // start the row // 
            // output the values in a row // 
            for (size_t j {1} ; j <=table ; ++j)
            {
                cout <<"" << setw(3) << i * j << "|" << endl; 
                // for each col .
            }
            cout << endl ; // end the row // 
        }
        // check if another table is required
        cout <<"Do you want another table(y or n) ?" << endl; 
        cin >> reply ; 
    }while (tolower(reply) == 'y'); 
    return 0; 
}