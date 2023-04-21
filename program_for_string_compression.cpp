/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is program for string compression
#include <bits/stdc++.h>

using namespace std;


int compr(string s)
{
    int ind=0;
    int i=0;
    int n=s.length();
    int j=0;
    int c=0;
    while(i<n)
    {
        j=i+1;
        while(j<n && s[i]==s[j])
        {
            j++;
        }
        s[ind++]=s[i];
        
        c=j-i;//this gives the count of repested character and j will be leading than i.
        
        if(c>1)
        {
            string ans=to_string(c);//converts integer to string
            for(char ch:ans)//this for loop works as char ch:"12"  supppose we have in ans="12" then 
            {//ch will take "1" first and adds into s then it takes 2 and adds into s. so this works like that
            //if you have like an="1" then for looop excuets only once.
                s[ind++]=ch;
            }
        }
        i=j;//j will moved forwared in above while loop this helps in increment of i by assigning.
    }
    return ind;
}

int main()
{
    string s="abbbbbbbbbbbb";
    int k= compr(s);
    cout<<k<<endl;

    return 0;
}
