//
// File: test.cpp
// Description: This is a program to find the smallest mountain in a vector of mountains.
// Created: Tue. June 6, 2023
// Author: Jared Ponce
// mail: jaredp1472@student.vvc.edu
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "mountain.h"

using namespace std;

int minEvelation(const vector<Mountain> vector) //Binary Search
{
    int lowest = vector.at(0).getElevation();
    int lowestIndex = 0;
    int temp = 0;
    for (int i = 0; i < vector.size(); i++)
    {
        temp = vector.at(i).getElevation();
        if (temp < lowest)
        {
            lowest = temp;
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

int main()
{
    //Instantiate Mountains
    Mountain m1(std::string("Chimborazo"), std::string("Ecuador"), 20549);
    Mountain m2(std::string("Matterhorn"), std::string("Switzerland"), 14692);
    Mountain m3(std::string("Olympus"), std::string("Greece (Macedonia)"), 9573);
    Mountain m4(std::string("Everest"), std::string("Nepal"), 29029);
    Mountain m5(std::string("Mount Marcy - Adirondacks"), std::string("United States"), 5344);
    Mountain m6(std::string("Mount Mitchell - Blue Ridge"), std::string("United States"), 6684);
    Mountain m7(std::string("Zugspitze"), std::string("Switzerland"), 9719);

    //Add Mountains to vector
    vector<Mountain> mlist;
    mlist.push_back(m1);
    mlist.push_back(m2);
    mlist.push_back(m3);
    mlist.push_back(m4);
    mlist.push_back(m5);
    mlist.push_back(m6);
    mlist.push_back(m7);

    //Formating and Output
    cout << left << setw(35) << "Name"
    << setw(25) << "Country"
    << "Elevation"
    <<endl;
    cout << string(90, '=') << endl;
    for (Mountain i : mlist)
    {
        i.print();
    }
    cout << string(90, '=') << endl;
    cout << "The mountain with the smallest elevation is:" << endl;
    mlist.at(minEvelation(mlist)).print();
    cout << string(90, '=') << endl;

    return 0;
}