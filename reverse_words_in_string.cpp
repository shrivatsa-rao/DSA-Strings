/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


// //this works for all test cases.

string reverse(string s)
{
    string temp="";
    vector<string>ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && temp!="")
        {
            ans.push_back(temp);
            temp="";
        }
        else
        if(s[i]!=' ')
        {
            temp=temp+s[i];
        }
    }
    
    if(temp!="")
    {
        ans.push_back(temp);
    }
    
    string val="";
    for(int i=ans.size()-1;i>=0;i--)
    {
        val=val+ans[i];
        if(i){
            val=val+' ';
        }
    }
    
    cout<<val;
}





//thios works for limited test case...better to go with above option

void reverse(string s)
{
    int l=0;
    int r=s.length()-1;
    string ans="";
    string temp="";
    
    while(l<=r)
    {
        char ch=s[l];
        if(ch!=' ')
        {
            temp=temp+ch;
        }
        else
        if(ch==' ')
        {
            if(ans!="")
            {
                ans=temp+' '+ans;
            }
            else
            {
                ans=temp;
            }
            
            temp="";
        }
        l++;
    }
    
    
    if(temp!="")
    {
        if(ans!="")
        {
            ans=temp+' '+ans;
        }
        else
        {
            ans=temp;
        }
    }
    
    
    cout<<ans;
    
}


int main()
{
    string s="hello shrivatsa";
    reverse(s);

    return 0;
}

