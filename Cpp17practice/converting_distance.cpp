#include <iostream> 
using namespace std; 

int main()
{
    unsigned int yards{} , feet{}, inches{}; 

    // convert a distance in yards, feet, inches to inches .. // 

    cout <<"Enter a distance as yards, feet and inches to inches" << endl;
    cout <<"With the three values separated by spaces:" << endl;
    cin >> yards >> feet >> inches; 

    const unsigned feet_per_yard{3}; 
    const unsigned inches_per_foot{12};

    unsigned total_inches{};  

    total_inches = inches + inches_per_foot *(yards *feet_per_yard + feet)  ; 

    cout << "The distances corresponds to " << total_inches << "inches" << endl;

    // convert a distnce in inches to yards feet and inches // 
    cout <<"Enter a distance in inches:" << endl; 
    cin >> total_inches ;  

    feet = total_inches / inches_per_foot; 
    inches = total_inches % inches_per_foot;

    yards = feet/feet_per_yard;  
    feet = feet % feet_per_yard; 

    cout <<"The distance corresponds to" << yards << feet << inches <<"Inches" << endl; 
    
    return 0 ; 
}