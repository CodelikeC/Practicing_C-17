#include <iostream> 
using namespace std ;

int main()
{
    const unsigned size{6}; 
    // array size //
    unsigned height[size] {26, 37, 47, 55, 62, 75};
    // an array of heights // 

    unsigned total{}; // sum of heights // 
    for (size_t i {} ; i < size ; ++i)
    {
        total +=height[i]; 
    } 

    const unsigned average{total/size}; 
    // Calculate average height // 
    cout <<"The average height is" << average << endl; 
    unsigned count{}; 
    for (size_t i {}; i < size ; ++i)
    {
        if (height[i] < average) 
        ++ count  ; 
    }

    cout << count <<"People are below average height" << endl; 
    return 0 ; 
}
