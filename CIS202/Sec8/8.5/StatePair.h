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
    void SetKey(T1 newkey);
    T1 GetKey();
    void SetValue(T2 newvalue);
    T2 GetValue();
	
// TODO: Define PrintInfo() method
    void PrintInfo();
};

template<typename T1, typename T2>
    StatePair<T1,T2>::StatePair(){

    }
template<typename T1, typename T2>
    StatePair<T1,T2>::StatePair(T1 userKey, T2 userValue){
        key = userKey;
        value = userValue;
    }
template<typename T1, typename T2>
    void StatePair<T1,T2>::SetKey(T1 newkey){
        key = newkey;
    }
template<typename T1, typename T2>
    void StatePair<T1,T2>::SetValue(T2 newvalue){
        value = newvalue;
    }
template<typename T1, typename T2>
    T1 StatePair<T1,T2>::GetKey(){
        return key;
    }
template<typename T1, typename T2>
    T2 StatePair<T1,T2>::GetValue(){
        return value;
    }
template<typename T1, typename T2>
    void StatePair<T1,T2>::PrintInfo(){
        std::cout << key << ": " << value << std::endl;
    }

#endif