#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // to use sort()
using namespace std;

const int NUM_VALUES = 5;

// Input NUM_VALUES of TheType into the vector parameter
template <typename TheType>
void Read(vector<TheType> &list)
{
    for (int j = 0; j < NUM_VALUES; ++j)
    {
        cin >> list.at(j);
    }
}

// Output the elements of the vector parameter
template <typename TheType>
void Write(vector<TheType> &list)
{
    long unsigned int j;
    for (j = 0; j < list.size(); ++j)
    {
        cout << list.at(j) << " ";
    }
}

// Return the min, median, and max of the vector parameter in a new vector
template <typename TheType>
vector<TheType> GetStatistics(vector<TheType> &list)
{
    /* Type your code here. */
    int min = 0;
    int median = 0;
    int max = list.at(list.size()-1);

    for(unsigned int i = 0; i < list.size(); i++){
        
    }
}

// Read values into a vector, sort the vector, output the sorted vector,
// then output the min, median, and max of the sorted vector
template <typename TheType>
void Run(vector<TheType> &list)
{
    /* Type your code here. */
}

int main()
{
    vector<int> integers(NUM_VALUES);
    Run(integers);
    cout << endl;

    vector<double> doubles(NUM_VALUES);
    Run(doubles);
    cout << endl;

    vector<string> strings(NUM_VALUES);
    Run(strings);

    return 0;
}
