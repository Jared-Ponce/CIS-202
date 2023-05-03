#include <iostream>
#include <deque>

using namespace std;

string make_lower(string input){
    for(char value : input){
        if(isalpha(value)){
            
        }
    }
}

int main()
{
    string line;
    string new_line = "";
    bool result;

    deque<char> check; // change name later

    /* Type your code here. */
    getline(cin, line);

    for(char value : line){
        check.push_front(tolower(value));
    }

    for(char value : check){
        new_line.push_back(value);
    }

    if(line == new_line){
        cout << "Yes, " << '"' << line << '"' << "is a palindrome." << endl;
    }

    else{
        cout << "No, " << '"' << line << '"' << "is not a palindrome." << endl;
    }

    return 0;
}
