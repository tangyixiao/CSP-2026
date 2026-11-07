#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;

    if(c1==c2)
    {
        cout<<1;
    }
    else
    {
        cout<<0<<0<<0<<0;
        return 0;
    }
    string a=s1.substr(0,2);
    string b=s2.substr(0,2);
    if(a==b)
    {
        cout<<1;
    }
    else
    {
        cout<<0<<0<<0;
        return 0;
    }
    string c=s1.substr(2,1);
    string d=s2.substr(2,1);
    if((c=="D"&&d=="F")||(c=="F"&&d=="D")||((c=="A")&&(d=="B"||d=="C"))||((c=="B")&&(d=="A"||d=="C"))||((c=="C")&&(d=="A"||d=="B")))
    {
        cout<<1;
    }
    else
    {
        cout<<0<<0;
        return 0;
    }
    if(((c=="D"&&d=="F")||(c=="F"&&d=="D"))||((c=="A"&&d=="B")||(c=="B"&&d=="A"))||((c=="C"&&d=="B")||(c=="B"&&d=="C")))
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
