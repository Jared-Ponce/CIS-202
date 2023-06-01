//
// File: main.cpp
// Description: This is a lab that needed a recursive print function added.
// Created: Thur. June 1, 2023, 2:40pm
// Author: Jared Ponce
// mail: jaredp1472@student.vvc.edu
//

#include <iostream>
#include <string>
#include "tree.h"

int main()
{
    Tree t1("Anne");
    Tree t2("Peter");
    t1.add_subtree(t2);
    Tree t3("Zara");
    t1.add_subtree(t3);
    Tree t4("Savannah");
    t2.add_subtree(t4);
    std::cout << "Size: " << t1.size() << std::endl;
    t1.print(); // Inorder traversal
    return 0;
}