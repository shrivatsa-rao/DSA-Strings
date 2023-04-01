/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is c++ program to reverse individual word in string without 
//changing the order of the given string.


#include <iostream>

using namespace std;
void rev(string s)
{
    string res="",t="";
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            t=t+s[i];
        }
        else
        {
            t=" "+t;//give space after each word in temporory string
            res=t+res;//add temporory string in result.
            t="";
        }
    }
    
    t=t+" "+res;//for last word add last string to the result.
    res=t;//put all words of temporary to result.
    
    cout<<res;
}

int main()
{
    string s="shrivatsa I am ur's";
    rev(s);
    
    return 0;
}
