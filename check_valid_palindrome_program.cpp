/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is a c++ program to check A valid palindrome or check if string is palindrome
//


#include <bits/stdc++.h>

using namespace std;

char lo(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
    {
        return ch;//if ch is character or number it will return as it is.
    }
    else
    {
        char temp;
        temp=ch-'A'+'a';//66-65+97='b'
        return temp;
    }
}

int onecheck(string temp)
{
    int i=0;
    int j=temp.size()-1;
    while(i<j)
    {
        if(lo(temp[i])!=lo(temp[j]))//it send each character to lo() function
        { //after converting it checks i and j are equal if both are equal then 
          //it will incrment i and decrements j; 
           return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    
    return 1;
}

void check(string s)
{
    string temp="";
    int i=0;
    for(i=0;i<s.size();i++)
    {
        if(((s[i]>='a')&&(s[i]<='z'))|| ((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='0')&&(s[i]<='9'))){
            temp.push_back(s[i]);//here only capital and small alpabets,and numbers been sent to
        }//to temp. so temp conatins only pure alpabets and numbers.
    }
        
    int k=onecheck(temp);
    
    if(k==0)
   {
       cout<<"not pal\n";
   }
   else
   {
       cout<<"pal\n";
   }
    
}

int main()
{
   string s="ab229ba";
   check(s);
   

    return 0;
}
