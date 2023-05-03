#include<iostream>
#include<sstream>
#include<vector>
#include<list>

using namespace std;

template <typename T, typename T2>
T get_last(const T2 &container)
{
    return *(container.rbegin())
}

template <typename T>
void gen_print(const T &container, ostream &o, const string &delim = " ")
{
    int index = 0;

    for (auto value : container)
    {
        if(index == get_last()){
            o << value;
            continue;
        }
        o << value << delim;
        index++;
    }
    o << endl;
}

int main(){
    ostringstream os;
    vector<int> int_vec = {10,9,8,7};
    vector<char> char_vec = {'a','b','c'};
    int int_ar[] = {1,2,3,4,5};
    char char_ar[] = {'x','y','z'};

    gen_print(int_vec, os, ",");
    gen_print(char_vec, os);
    gen_print(int_ar, os);
    gen_print(char_ar, os);

    cout << os.str() << endl;

    return 0;
}