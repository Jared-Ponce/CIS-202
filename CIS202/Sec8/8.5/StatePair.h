#ifndef STATEPAIR
#define STATEPAIR
#include <iostream>
#include <string>

template<typename T1, typename T2>
class StatePair {
// TODO: Define constructors
private:
    T1 key;
    T2 value;

public:
    StatePair();
    StatePair(T1 userKey, T2 userValue);
   
// TODO: Define mutators, and accessors for StatePair
    void SetKey(T1 newkey){
        key = newkey;
        }
    T1 GetKey(){
        return key;
        }
    void SetValue(T2 newvalue){
        value = newvalue;
        }
    T2 GetValue(){
        return value;
        }
	
// TODO: Define PrintInfo() method
    void PrintInfo(){
        std::cout << key << ": " << value << std::endl;
    }
};

#endif