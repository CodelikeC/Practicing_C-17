#include <iostream> 
using namespace std ; 
#include <iomanip> 

int main ()
{
    const char *pstar1{"Fatty Arbuckle"}; 
    const char *pstar2{"Clara Bow"};
    const char *pstar3{"Lassie"}; 
    const char *pstr{"Your lucky star is:"};
    cout <<"Pick a lucky star! Enter a number between 1 and 8:" << endl; 
    size_t choice {}; 
    cin >> choice; 

    switch (choice)
    {
    case 1:
        /* code */
        cout << pstr <<pstar1 << endl; 
        break;
    
    case 2: 
    cout << pstr <<pstar2 << endl;
    break;
    case 3 :
    cout << pstr <<pstar3 <<endl; 
    break; 
    default:
        break;
    }
    return 0 ;
}