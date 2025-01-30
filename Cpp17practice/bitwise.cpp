#include <iostream> 
using namespace std; 
#include <iomanip> 


// using the bitwise operators // 

int main ()
{
    unsigned int red{0xFF0000u}; // color red // 
    unsigned int white{0xFFFFFFu}; /// color white - R&B all maximum .. 

    cout <<hex << setfill('0'); 
    // fill character 0 
    cout <<"Try out bitwise complement, AND and OR operators:" << endl; 

    cout <<"Initial value:       red = " << setw(8) << red << endl; 

    cout <<"Complement:    = ~red" << setw(8) << ~red << endl;

    cout <<"Initial value:  white = " << setw(8) << white<< endl; 

    cout <<"Complement:    ~white = " << setw(8) << ~white << endl;

    cout <<"Bitwise AND: red &white =" << setw(8) << (red &white) << endl;   
    cout <<"Bitwise OR : red or white =" << setw(8) <<(red or white) << endl; 

    cout <<"Now try successive exclusive or operation:"<< endl;
    unsigned int mask {red ^ white}; 
    cout <<"Mask = red ^ white = " << setw(8) << mask  ; 
    cout <<"mask ^ red = " << setw(8) << (mask^ red) << endl; 
    cout <<"mask ^ white = " << setw(8) << (mask ^ white) << endl; 

    unsigned int flags{0xFF};  // flags variable // 
    unsigned int bitmask{0x1};  // select bit 1 // 
    unsigned int bit6mask{0x6} ; // select bit 6 
    unsigned int bit20mask{1u << 19}; // select bit 20

    cout <<" Use masks to select or set a particular flag bit:" << endl; 
    cout <<"Select bit 1 from flags" << setw(8) << (flags and bitmask); 
    cout << "\nSelect bit 6 from flags  : " << setw(8) << (flags & bit6mask);
    cout << "\nSwitch off bit 6 in flags: " << setw(8) << (flags &= ~bit6mask);
    cout << "\nSwitch on bit 20 in flags: " << setw(8) << (flags |= bit20mask)
 << endl;

    return 0;
}