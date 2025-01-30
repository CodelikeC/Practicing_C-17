#include <iostream> 
using namespace std; 
#include <string>
#include <cctype> 

int main ()
{
    cout <<"Hello characters string" << endl; 
    string text; // stores the input .. 
    cout <<"Enter a line of text:" << endl; 
    getline(cin, text); 
    // read a line including spaces // 

    unsigned vowels{}; // count of vowels.. 
    unsigned consonants{}; // count of consonants // 

    for (size_t i{}; i < text.length() ; ++i)
    {
        if (isalpha(text[i]))
        {
            // check for a letter // 
            switch (tolower(text[i]))
            {
            case 'a': case 'e' : case 'i' : case 'o' : case 'u':
                /* code */
            ++vowels;
                break;
            
            default:
            ++consonants; 
                break;
            }
        }
    }
    cout <<"Your input contained" << vowels 
    <<"Vowels and" << consonants <<"consonants" << endl; 
    return 0;
}
