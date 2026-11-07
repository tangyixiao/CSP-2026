#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2)
        cout<<1;
    else
        cout<<0;
    if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])
        cout<<1;
    else
        cout<<0;
    bool a=(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')||(!(s1[2]=='D')&&!(s2[2]=='F')&&!(s1[2]=='F')&&!(s2[2]=='D'));
    if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&a)
        cout<<1;
    else
        cout<<0;
    if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&a&&abs(s1[2]-s2[2])==1)
        cout<<1;
    else
        cout<<0;
    return 0;
}
