#include <iostream> 
using namespace std ;
#include <iomanip>
#include <cmath>

int main()
{
    size_t max{} ; // number of primes required //
    cout <<"How many primes would you like?" << endl; 
    cin >> max; // input the number // 
    if (max == 0)
    return 0 ;
    auto *primes{new unsigned[max]}; // allocate memory for max primes .. 

    size_t count {1}; // count of primes found // 
    primes[0] = 2 ; 

    unsigned trial{3}; // initial candidate prime // 

    while (count < max)
    {
        bool isprime{true}; // indicates when a prime is found // 
        const auto limit = static_cast<unsigned> (sqrt(trial));
        for (size_t i {}; primes[i] <= limit and isprime ; ++i)
        {
            isprime = trial % primes[i] > 0 ; 
        }
        if (isprime)
        {
            primes [count++] = trial; 
            trial += 2 ; 
        }

        // output primes 10 to a line // 
        for (size_t i{}; i < max ; ++i)
        {
            cout <<setw(10) << primes[i] << endl; 
            if ((i+1) % 10 == 0)
            {
                cout << endl; 
            }
            delete [ ] primes;  // Free up the memory // 
            primes = nullptr ; // ... and reset the pointer 
        }
    }
    return 0 ; 
}
