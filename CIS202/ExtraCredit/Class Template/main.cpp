#include <iostream>
using namespace std;

template <typename TheType>
class TripleItem
{
public:
    TripleItem(TheType val1 = 0, TheType val2 = 0, TheType val3 = 0);
    void PrintAll() const;  // Print all data member values
    void PrintVals() const; // Return min data member value
    void SortItem();

private:
    TheType item1; // Data value 1
    TheType item2; // Data value 2
    TheType item3; // Data value 3
};

template <typename TheType>
TripleItem<TheType>::TripleItem(TheType i1, TheType i2, TheType i3)
{
    item1 = i1;
    item2 = i2;
    item3 = i3;
}

// Print all data member values
template <typename TheType>
void TripleItem<TheType>::PrintAll() const
{
    cout << "(" << item1 << "," << item2
         << "," << item3 << ")" << endl;
}

template <typename TheType>
void TripleItem<TheType>::PrintVals() const
{
    cout << "Min: " << item1 << endl
         << "Mid: " << item2 << endl
         << "Max: " << item3 << endl
         << endl;
}

template <typename TheType>
void TripleItem<TheType>::SortItem()
{
    TheType maxVal = item1; // Holds value of min item, init to first item

    if (maxVal > item2)
    {
        item1 = item2;
        item2 = maxVal;
    }
    else
    {
        maxVal = item2;
    }

    if (maxVal > item3)
    {
        item2 = item3;
        item3 = maxVal;
    }
    PrintVals();
}

int main()
{
    TripleItem<int> triInts(9999, 5555, 6666); // TripleItem class with ints
    TripleItem<short> triShorts(99, 55, 66);   // TripleItem class with shorts

    // Try functions from TripleItem
    triInts.PrintAll();
    triInts.SortItem();

    triShorts.PrintAll();
    triShorts.SortItem();

    return 0;
}