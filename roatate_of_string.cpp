/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is a program to find whether b is a rotattion of a.

#include <bits/stdc++.h>

using namespace std;
bool rot(string a,string b)
{
    string t;
    t=a+a;
    if(t.find(b)!=string::npos)//if b is present in t then return true.
    {                           //npos tells end of line.
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    string a="bbarba";
    string b="tt";
    
    int c=rot(a,b);
    if(c)
    {
        cout<<"b is a rotate of a\n";
    }
    else
    {
        cout<<"no rotate\n";
    }
    
    return 0;
}
