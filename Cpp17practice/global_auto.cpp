#include <iostream> 
using namespace std;
// demonstrate scope, life time, and global variable //
#include <bits/stdc++.h>
long count{999L}; 
// global count1 
double count2{3.14}; 
// global count2 
int count3; 
// global count3 // 

int main()
{
    cout <<"The global and automatic" << endl; 
    int count1{10}; // hide global count1 //
    int count3{50}; // hides global count3 ..//

    cout <<"" << endl;
    cout <<"Value of outer count1 = " << count1 << endl; 
    cout <<"Value of global count2 =" << ::count << endl;
    cout <<"Value of global count2 =" << count2 << endl;

    {
        int count1{20}; 
        int count2{30}; 

        cout <<"Value of inner count1 =" << count1 << endl; 
        cout <<"Value of global count1 = " << ::count << endl; 
        cout <<"Value of inner count2 = " << count2 << endl; 
        cout <<"Value of global count2 = " << ::count2 << endl; 

        count1 = ::count + 3; // this sets inner count1 to global count1 + 3 // 
        ++ :: count; 
        cout <<"Value of inner count1 = " << count1 << endl; 
        cout <<"Value of inner count3 =" << count3 << endl; 
        cout <<"Value of global count3 =" << ::count3 << endl; 

        cout <<"Value of global count2 = " << count2 << endl;
        // function scope end here // 
    }

    
    return 0 ; 
}