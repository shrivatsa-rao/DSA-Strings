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
    vector<string>ans;// vector of string always stores list of strings ans[0]="hari",ans[1]="ram",ans[2]="anu" like this.
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && temp!="")
        {
            ans.push_back(temp);//ans[0]="hello" and ans[1]="shrivatsa".
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
        ans.push_back(temp);// remember this this is for last string from the string.
    }
    
    string val="";
    for(int i=ans.size()-1;i>=0;i--)//here size of ans will be 2 becuase when you have vector of strings it will be ans[0]="hello",ans[1]="shrivatsa" so vector stores
    {                             //in this way hence we have size of ans will be 2.
        val=val+ans[i];
        if(i){
            val=val+' ';// this gives space after each string but when "i" is zero then it comes out of the loop
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

