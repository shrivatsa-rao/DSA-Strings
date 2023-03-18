/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//here main moto is to see 0101010 not two zeros are together and no two ones 
//are together.

#include <bits/stdc++.h>

using namespace std;

char flip(char ex)//here this functions changes 0 to 1 and 1 to 0 for 
{               //for each character.
    if(ex=='0')
    return '1';
    else
    return '0';
}

int getflip(string ans,char ex)
{
    int c=0;
    for(int i=0;i<ans.length();i++)
    {
        if(ans[i]!=ex)//if the character is not as expected then increment c.
        {           //change ex for each bit . not two zeros are together,
            c++;    //ex will be either 01010....or 101010....
                    //based on ans ex will be dependemt.
        }
        ex=flip(ex);
    }
    return c;
}



int main()
{
   string ans="011000";
   int ans0=getflip(ans,'0');
   int ans1=getflip(ans,'1');
   int res=min(ans0,ans1);//get the mininmum number of flips so that no zeros are together.
   cout<<res<<endl;

    return 0;
}
