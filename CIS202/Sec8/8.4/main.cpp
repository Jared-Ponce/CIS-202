#include <string>
#include <iostream>
#include <vector>

using namespace std;

template<typename Generic>
int CheckOrder(Generic Arg1, Generic Arg2, Generic Arg3, Generic Arg4){
    vector<Generic> container{Arg1,Arg2,Arg3,Arg4};
    int check = 0;
    for(unsigned int i = 0; i < 3; i++){
        if(container.at(i) > container.at(i+1)){ check += 1;}
        else if(container.at(i) < container.at(i+1)){ check -= 1;}
    }

    if (check == 3)
    {
        check = 1;
    }
    else if(check == -3){
        check = -1;
    }
    else{
        check = 0;
    }
    
    
    return check;
}

int main() {
   // Read in four strings
   string stringArg1, stringArg2, stringArg3, stringArg4;
   cin >> stringArg1;
   cin >> stringArg2;
   cin >> stringArg3;
   cin >> stringArg4;
   // Check order of four strings
   cout << "Order: " << CheckOrder(stringArg1, stringArg2, stringArg3, stringArg4) << endl;

   // Read in four doubles
   double doubleArg1, doubleArg2, doubleArg3, doubleArg4;
   cin >> doubleArg1;
   cin >> doubleArg2;
   cin >> doubleArg3;
   cin >> doubleArg4;
   // Check order of four doubles
   cout << "Order: " << CheckOrder(doubleArg1, doubleArg2, doubleArg3, doubleArg4) << endl;
   
   return 0;
}