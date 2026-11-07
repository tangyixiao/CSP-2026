#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
char a,b,c,d,ans,num;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >>c1>>s1>>c2>>s2;
    if(c1==c2)
        cout <<1;
    else
    {
        cout <<"0000";
        return 0;
    }
    c=s1[0];
    d=s2[0];
    a=s1[1];
    b=s2[1];
    ans=s1[2];
    num=s2[2];
    if(a==b && c==d)
        cout <<1;
    else
    {
        cout <<"000";
        return 0;
    }
    if(a==b && c==d)
    {
        if(ans=='A' && num=='B')
            cout <<1;
        else if(ans=='A' && num=='C')
            cout <<1;
        else if(ans=='B' && num=='A')
            cout <<1;
        else if(ans=='B' && num=='C')
            cout <<1;
        else if(ans=='C' && num=='A')
            cout <<1;
        else if(ans=='C' && num=='B')
            cout <<1;
        else if(ans=='D' && num=='F')
            cout <<1;
        else if(ans=='F' && num=='D')
            cout <<1;
        else
            cout <<0;
    }
    if(ans+num!=135)
    {
        if(c==d && a==b && ans+1==num)
            cout <<1;
        else if(c==d && a==b && ans-1==num)
            cout <<1;
        else
            cout <<0;
    }
    else
        cout <<0;
    return 0;
}