#include <iostream> 
using namespace std; 
#include <algorithm>
#include <string> 
#include <vector> 
#include <cstring> 
using std :: vector; 
using std :: string;

// function prototypes // 

double largest(const double data[], size_t count); 
double largest(const vector<double> &data);
int largest(const vector <int> & data); 
string largest(const vector <string> &words); 

int main ()
{
    double values[]
    {
        1.5, 44.6, 13.7, 21.2, 6.7
    };

    vector <int> numbers{15,44,13,21,6,8,5,2};
    vector<double> data{3.5, 5, 6, -1.2, 8.7, 6.4};

    vector <string> names {"Elliot Alderson", "Neo", "Tony Stark", "Hannibal", "Terminator"};
    cout <<"The largest of values is" << largest(values, size_t(values));
    cout <<"The largest of numbers is" << largest(numbers) << endl; 
    cout <<"The largets of Data is" << largest(data) << endl; 
    cout <<"The largest of names is" << largest(names) << endl;  
    return 0;  
}

// finds the largest of an array of double values //
double largest(const double data[], size_t count)
{
    double max{data[0]}; 
    for (size_t i {1}; i < count ; ++i)
    if (max <data[i])
    max = data[i]; 
    return max ; 
}

double largest (const vector <double>  &data)
{
    double max {data[0]};
 for (auto value : data)
 if (max < value) max = value;
 return max;
}

// finds the largest of a vector of int values // 
int largest(const vector <int> &data)
{
    int max{data[0]}; 
    for (auto value : data)
    {
        if (max < value)
        max = value ; 
    }
    return max; 
}

// finds the largest of a vector of string objects..// 
string largest(const vector <string> &words)
{
    string max_word {words[0]}; 
    for (const auto &word : words)
    {
        if (max_word < word )
        max_word = word; 
    }

    return max_word; 
}
