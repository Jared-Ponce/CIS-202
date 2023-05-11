#include <iostream>
using namespace std;

int RecursiveBinarySearch(int numbers[], int numbersSize, int key, int high, int low = 0, int mid = -1)
{
    mid = (high+low)/2;
    if(key < numbers[low] || key > numbers[high]){    // Failed
        return -1;
    }
    else if(numbers[mid] == key){  // Found key
        return mid;
    }

    if(high >= low)
    {
        if (numbers[mid] < key)
        {
            low = mid + 1;
            RecursiveBinarySearch(numbers, numbersSize,key, high, low, mid);
        }
        else if (numbers[mid] > key)
        {
            high = mid - 1;
            RecursiveBinarySearch(numbers, numbersSize, key, high, low, mid);
        }
    }
}

int main()
{
    int numbers[] = {2, 4, 7, 10, 11, 32, 45, 87};
    const int NUMBERS_SIZE = 8;
    int i;
    int key;
    int keyIndex;

    cout << "NUMBERS: ";
    for (i = 0; i < NUMBERS_SIZE; ++i)
    {
        cout << numbers[i] << ' ';
    }
    cout << endl;

    cout << "Enter a value: ";
    cin >> key;

    keyIndex = RecursiveBinarySearch(numbers, NUMBERS_SIZE, key, NUMBERS_SIZE-1);

    if (keyIndex == -1)
    {
        cout << key << " was not found." << endl;
    }
    else
    {
        cout << "Found " << key << " at index " << keyIndex << "." << endl;
    }

    return 0;
}