/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



// C++ program to demonstrate
// array of strings using
// vector class
#include <iostream>
#include <string>
#include <vector>
 
// Driver code
int main()
{
  // Declaring Vector of String type
  // Values can be added here using
  // initializer-list
  // syntax
  std::vector<std::string> colour{"alice and bob love leetcode", "i think so too"};
 
  // Strings can be added at any time
  // with push_back
  
 std::cout << colour.size()<< "\n";//here size will be 2 becuse only 2 large strings are available elements
 std::cout << colour[0].size();//bhere it gives size of first string is 27
  // Print Strings stored in Vector
//   for (int i = 0; i < colour.size(); i++)
//       std::cout << colour.size()<< "\n";
//
}
