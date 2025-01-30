#include <iostream> 
using namespace std; 

int main ()
{
    int age{}; // Age of the prospective borrower
    int income{}; // Income of the prospective borrower // 
    int balance{}; // Current bank balance // 

    // get the basic data for asssesing the loan // 
    cout <<"Please enter your age in years:" << endl;
    cin >> age; 
    cout <<"PLease enter your annual income in dollars:" << endl; 
    cin >> income; 

    cout <<"What is your current account balance in dollars:" << endl ; 
    cin >> balance; 

    if (age >= 21 and (income > 25'000 or balance > 100'000))
    {
        int loan{}; 
        // stores the maximum loan amount // 
        if (2*income < balance/2)
        {
            loan = 2 *income; 
        }
        else 
        {
            loan = balance/ 2  ; 
        }

        cout <<"You can borrow up to $" << loan << endl; 

    }
    else 
    {
        cout <<"Unfortunately, you do not qualify for a loan" << endl; 
    }
    return 0 ; 
}
