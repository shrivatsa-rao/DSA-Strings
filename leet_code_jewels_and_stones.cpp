/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//leetcode string problem jeweles and strones.
#include <bits/stdc++.h>

using namespace std;
unordered_map<int,int>m;
int coun(string j,string s)
{
    int res=0;
    for(auto i:s)//auto i will direct takes value "a" so i="a" and after that it takes i="a" and after that i="A"
    {//after increment i will be incremented but i won't be integer it i will be directly takes the value from the map
       
        m[i]++;//here m[97]++ so in the 97th place value will be 1 and 98th place avlue will be 2 it will goes on
        //so basically it takes asccii value hence auto won't take any integer value it will directly takes the value
        //as i="a"
    }
    
    for(auto i:j)
    {
        if(m[i]>0)//i will takes the value from j as i="a" and then it checks as m[97]>0 the a value is taken from j array
        {
            res=res+m[i];//here value stoed in the map will be added to the res.
        }
    }
    return res;
}

int main()
{
    string j="aA";
    string s="aAAbb";
    int m=coun(j,s);
    cout<<"total count"<<m<<endl;
    

    return 0;
}
