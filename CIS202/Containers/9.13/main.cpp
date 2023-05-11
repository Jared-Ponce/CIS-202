#include <iostream>
#include <deque>

using namespace std;

int main()
{
    string line;
    bool result;

    deque<char> check; // change name later

    /* Type your code here. */
    getline(cin, line);

    for(char value : line){
        if(isalpha(value)==0){
            continue;
        }
        check.push_front(tolower(value));
    }

    for(auto elm : check){
        if(check.front() == check.back()){
            result = true;
            check.pop_front();
            check.pop_back();
        }
        else{
            result = false;
            break;
        }
    }

    if(result == true){
        cout << "Yes, " << '"' << line << '"' << " is a palindrome." << endl;
    }
    else{
        cout << "No, " << '"' << line << '"' << " is not a palindrome." << endl;
    }

    return 0;
}
