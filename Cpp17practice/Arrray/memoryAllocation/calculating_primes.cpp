#include <iostream> 
using namespace std ; 
#include <iomanip> 

int main ()
{
    const size_t max{100} ; // Number of primes required // 
    long primes[max] {2L}; // First prime defined
    size_t count {1}; // Count of primes found so far
    long trial{3L}; // Candidate prime 

    while (count < max)
    {
        bool isprime{true}; // Indicates when a prime is found // 
        // try diving the candidate by all the primes we have // 
        for (size_t i {} ;  i < count and isprime ; ++i)
        {
            isprime = trial % *(primes + i) > 0 ; 
            // false for exact division // 
        }
        if (isprime)
        {
            *(primes + count++) = trial ; 
        }
        trial += 2 ; // next value for checking // 
        // Output primes 10 to a line // 
        cout <<"The first" << max <<"primes are:" << endl;
        for (size_t i {} ; i < max ; ++i)
        {
            cout << setw(7) << *(primes + i); 
            if ((i+ 1) % 10 == 0)
            cout << endl; // new line after 10th prime // 
        } 
        cout << endl; 
    }
    // The output is as follows : 
    return 0 ; 
}