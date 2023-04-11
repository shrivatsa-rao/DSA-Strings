/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is c++ program  to find the maximum occurring character in a string without using map.
    
#include <iostream>

using namespace std;
char getMaxOccuringChar(string s)
{
       int a[27]={0};
       int k;
       
       for(int i=0;i<s.size();i++)
       {
           if(s[i]>='a'&& s[i]<='z')
           {
               k=s[i]-'a';
           }
           else
           {
               k=s[i]-'A';
           }
           a[k]++;
       }
       
       int maxi=-1;
       int ans=0;
       
       for(int i=0;i<26;i++)
       {
           if(maxi<a[i])
           {
               maxi=a[i];
               ans=i;
           }
       }
       
       char ch=ans+'a';
       cout<<ch;
}
    
 int main()
{
    string s="abbba";
    getMaxOccuringChar(s);
}

