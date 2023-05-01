/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*/
//program to find maximum number words in the array
#include <iostream>
#include <string>
#include <vector>
 
// Driver code
int main()
{
    int c;
    int maxi=-1;
  // Declaring Vector of String type
  // Values can be added here using
  // initializer-list
  // syntax
  std::vector<std::string> color{"alice and bob love leetcode", "i think so too","hjjj"};
 
  // Strings can be added at any time
  // with push_back
//  std::cout<<color.size()<<"\n";
//   std::cout<<color[2].size()<<'\n';

for(int i=0;i<color.size();i++)//here color.size gives 4 beacuse we have four large strings
{
     c=0;
    for(int j=0;j<color[i].size();j++)//color[i].size gives 27 for first set of words and
    {
        if(color[i][j]==' ')//it compares each letter of first string with the space
        {
            c++;
        }
    }
    
    if(maxi<c)
    {
        maxi=c;
    }
    
    
}

 std::cout<<"maximum words is"<<maxi+1<<"\n";
 
}
