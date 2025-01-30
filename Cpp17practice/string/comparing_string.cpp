#include <iostream> 
#include <iomanip> 
#include <string> 
#include <cctype> 
#include <vector> 
using namespace std; 

int main ()
{
    vector<string> names; // vector of names // 
    string input_name; // stores a name // 
    char answer{}; // response to a prompt // 

    do 
    {
        cout <<"Enter a name:" << endl ; 
        cin >> input_name; 
        names.push_back(input_name); 

        cout <<"Do you want to enter another name?" << endl;
        cin >> answer; 
    } while(tolower(answer));

    // sort the names in ascending sequence .. // 
    bool sorted{}; 
    do 
    {
        bool sorted{};  
        for (size_t i ; i < names.size(); ++i)
        {
            // out of order - so swap names //
            if (names [i-1] > names[i]) 
            {
            names[i].swap(names[i-1]); 
            sorted  = false; 
            }
        }
    }while(!sorted);

    // find the length of the longest name // 
    size_t max_length{}; 
    for (const auto & name : names)
         
        if (max_length < name.length())
        
            max_length = name.length(); 
        
    
    // output the sorted names 5 to a line // 
    const size_t field_width = max_length + 2 ; 
    size_t count{}; 

    cout <<"In ascending sequence the names you entered are:" << endl; 
    for (const auto &name : names)
    {
        cout << setw(field_width) << name << endl;
        if (!(++count % 5))
        cout << endl; 
    }
    cout << endl; 
    return 0; 
}