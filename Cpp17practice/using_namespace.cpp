#include <iostream> 
using namespace std;

// first name space // 
namespace first_space
{
    void func()
    {
        cout <<"Inside first_space" << endl; 
    }
}

// Second namespace // 
namespace second_space
{
    void func()
    {
        cout <<"Inside second_space" << endl; 
    }
}

using namespace first_space; 

int main()
{
    func(); 
    return 0;
}