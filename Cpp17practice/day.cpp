#include <iostream>
using namespace std;

int main ()
{
enum class Day
{
    Monday, 
    Tuesday = Monday + 2, 
    Wednesday = Tuesday + 2, 
    Thursday = Wednesday + 2, 
    Friday = Thursday + 2 , 
    Saturday = Friday + 2, 
    Sunday = Saturday + 2, 

    Mon = Monday , 
    Tues = Tuesday , 
    Wed = Wednesday, 
    Thurs = Thursday, 
    Fri  = Friday, 
    Sat = Saturday,
    Sun = Sunday


};

Day yesterday{Day :: Monday}, today {Day :: Monday}, tomorrow {Day :: Wednesday} ; 
const Day poets_day {Day :: Friday}; 

enum class Punctation : char {Comma = ',', Exclamation = '!', Question = '?' };

Punctation ch {Punctation :: Comma}; 

cout <<"Yesterday's value is:" << static_cast<int>(yesterday)
<< static_cast<char>(ch) <<"but poets_day's is" << static_cast<int>(poets_day)
<< static_cast<char>(Punctation :: Exclamation) << endl; 

today = Day :: Thursday; // Assign new .. 
ch = Punctation :: Question ; // .. enumarator values // 
tomorrow =poets_day ; // Copy enumerator value // 

cout <<"Is today value" << static_cast <int> (today)
<<") the same as poets_day (" << static_cast<int>(poets_day)
<<")" << static_cast<char>(ch) << endl;

return 0 ; 

}