#include <iostream> 
using namespace std; 

#include <iomanip>
#include <memory> 
#include <vector> 
#include <cctype>

// Using smart pointers // 

int main()
{
    vector<shared_ptr<vector<double>>> records; 
    // Temperature records by days // 
    size_t day {1}; // Day number // 

    while (true)
    {
        // vector to store current day temperatures created in the free store // 
        auto day_records
        {
            make_shared<vector<double>>()
        }; 
        records.push_back(day_records);
        // Save pointer in records vector // 
        cout <<"Enter the temperatures for day" << day++
        << "Seperated by spaces. Enter 1000 to end:" << endl;

        while (true)
        {
            // Get temperatures for current day // 
            double t{}; // A temperature // 
            cin >> t ; 
            if (t == 1000.0)
            break; 
            day_records-> push_back(t);
        }
        cout <<"Enter another day is temperatures (Y or N)?" << endl ; 
        char answer{}; 
        cin >> answer; 
        if (toupper(answer) != 'Y')
        break; 

    } 
    day = 1; 

    cout << fixed << setprecision(2) << endl; 
    for (auto record : records)
    {
        double total{}; 
        size_t count{}; 

        cout <<"Temperatures for day" << day++ << endl; 
        for (auto temp :*record)
        {
            total+=temp ; 
            cout << setw(6) << temp << endl;
            if (++count % 5 == 0)
            cout << endl; 
        }
        cout <<"Average temperature:"<< total/count << endl;
    }
    return 0 ; 
}