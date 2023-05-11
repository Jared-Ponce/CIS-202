#include <iostream>
using namespace std;

int RecursiveBinarySearch(int numbers[], int numbersSize, int key, int high, int low = 0)
{
    int mid = (high+low)/2;
    if(low>high){return -1;}   // Failed
    else if(numbers[mid] == key){return mid;}   // Found index
    if (numbers[mid] < key){return RecursiveBinarySearch(numbers, numbersSize,key, high, mid+1);}
    else if (numbers[mid] > key){return RecursiveBinarySearch(numbers, numbersSize, key, mid-1, low);}
}

/*int bin(int ar[],int key,int low,int high){   //example
    int mid = (low+high)/2;
    if(low>high){return -1;}
    else if(ar[mid] < key){return bin(ar,key,mid+1,high);}
    else if(ar[mid] > key){return bin(ar,key,low,mid-1);}
    else{return mid;}
}*/

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