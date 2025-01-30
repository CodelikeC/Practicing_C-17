#include <iostream> 
using namespace std ; 
#include <iomanip> 

int main ()
{
    int unit_price{295}; // Item unit price in cents / / 
    int count{}; //Number of items ordered // 
    int discount_threehold{25}; // Quantity threshold for discount // 
    double discount{0.07}; // Discount for quantities over discount_threshold // 

    int *pcount{&count}; // Pointer to count // 
    cout <<"Enter the number of items you want:" << endl; 
    cin >> *pcount; 
    cout <<"The unit price is" << fixed << setprecision(2) <<"$" << unit_price/100.0 << endl; 

    // Calculate gross price // 
    int *punit_price{ &unit_price}; 
    int price{
        *pcount **punit_price
    };
    // gross price via pointers .. 
    auto *pprice {&price}; 
    // pointer to gross price // 

    // Calculate net price in US$
    double net_price{}; 
    double *pnet_price{nullptr}; 
    pnet_price = &net_price; 

    if (*pcount > discount_threehold)
    {
        cout <<"You qualify for a discount of" 
        << static_cast<int>(discount *100.0) <<"percent" <<endl; 
        *pnet_price = price *(1.0- discount) / 100.0 ;
    }
    else 
    {
        net_price = *pprice /100.0 ; 
    }

    cout <<"The net price for" << *pcount 
    << "items is $" << net_price << endl; 
    return 0;
}