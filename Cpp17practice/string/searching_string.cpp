#include <iostream> 
using namespace std; 
#include <string> 

int main ()
{
    string sentence = "Manners maketh man";
    string word = "man"; 
    cout << sentence.find(sentence) << endl;
    cout << sentence.find(word) << endl; 
    cout << sentence.find("x") << endl; 
    cout << sentence.find("K" ) << endl; 
    return 0 ;

}