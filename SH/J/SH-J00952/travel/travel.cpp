#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","W",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    string s112,s212;
    char s13,s23;
    s112=s1.substr(0,2);
    s13=s1[2];
    s212=s2.substr(0,2);
    s23=s2[2];
    if(c1==c2)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    if((s112==s212)&&(c1==c2))
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    if(((s112==s212)&&(c1==c2))&&((s13<'D'&&s23<'D')||(s13>'C'&&s23>'C')))
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    if(((s112==s212&&c1==c2)&&((s13<'D'&&s23<'D')||(s13>'C'&&s23>'C')))&&((s13==s23+1||s13==s23-1)||((s13=='D'&&s23=='F')||(s13=='F'&&s13=='D'))))
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
