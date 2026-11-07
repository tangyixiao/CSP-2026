#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2)
    {
        cout<<"1";
          }
    else
    {
        cout<<"0";
    }
    string t=s1-s1[2];
    string t1=s2-s2[2];
    if(c1==c2&&s1==s2)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
    if(c1==c2&&s1==s2)
    {
        if(s2[2]==A||B||C&&s1[2]==A||B||C||s2[2]==D||F&&s[2]==D||F)
        {
            cout<<"1";
        }
    }
    else
    {


        cout<<"0";
    }
    if(c1==c2&&s1==s2)
    {
        if(s2[2]==A||B||C&&s1[2]==A||B||C||s2[2]==D||F&&s1[2]=D||F)
        {
             for(int i='A';i<='F';i++)
             {

                 s2[2]==i;
                 if(i=s1[2]+'1'||s1[2]-'1')
                 {
                     cout<<"1";
                 }
             }
        }
        else
        {
            cout<<"0";
        }


    return 0;
}
