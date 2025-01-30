#include <iostream> 
using namespace std; 
#include <iomanip>
#include <array> 
int main ()
{
    cout <<"Array of the pointer" << endl; 
    const char *pstars[]
    {
        "Fatty", "Clara Bow", 
        "Lassie", "Slim Pickens", 
        "Boris Karloff", "Mae West", 
        "Oliver Hardy", "Greta Garbo"
    };

    cout <<"Pick a lucky star! Enter a number between 1 and" 
    << sizeof(pstars) << endl;

    size_t choice ; 
    cin >> choice; 

    if (choice >= 1 and choice <+ sizeof(pstars))
    {
        cout <<"Your lucky star is" << pstars[choice -1] << endl; 

    }
    else 
    {
        cout <<"Sorry, you have not got a lucky star" << endl; 
    }
    return 0 ;

}
