#include <iostream> 
#include <iomanip> 
#include <cctype> 
#include <limits> 

using namespace std; 

int main ()
{
    // output the coloumn headings // 
    cout << setw(11) << "Character" << setw(13) << "Hexadecimal" << endl; 
    cout << setw(9) << "Decimal" << endl; 
    cout << uppercase ; 
    // Uppercase hex digits // 

    // output characters and corresponding codes // 
    unsigned char ch {}; 
    do 
    {
        if (!std :: isprint(ch))
        continue;
        cout << setw(6) << ch 
        << hex << setw(12) << static_cast<int>(ch)
        << dec << setw(10) << static_cast<int>(ch)
        << endl; 
        
    } while(ch ++ < numeric_limits<unsigned char> :: max()) ; 
    return 0 ;
}
