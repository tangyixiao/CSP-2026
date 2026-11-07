#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a,b,ans[10];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>s1>>b>>s2;
    if(a==b) ans[0]=1;
    if(ans[0] && s1.substr(0,2)==s2.substr(0,2)) ans[1]=1;
    if(ans[1])
    {
        if(s1[2]=='A')
            if(s2[2]=='B' || s2[2]=='C') ans[2]=1;
        if(s1[2]=='B')
            if(s2[2]=='A' || s2[2]=='C') ans[2]=1;
        if(s1[2]=='C')
            if(s2[2]=='A' || s2[2]=='B') ans[2]=1;
        if(s1[2]=='D')
            if(s2[2]=='F') ans[2]=1;
        if(s1[2]=='F')
            if(s2[2]=='D') ans[2]=1;
    }
    if(ans[2])
    {
        if(s1[2]=='A')
            if(s2[2]=='B') ans[3]=1;
        if(s1[2]=='B')
            if(s2[2]=='A' || s2[2]=='C') ans[3]=1;
        if(s1[2]=='C')
            if(s2[2]=='B') ans[3]=1;
        if(s1[2]=='D')
            if(s2[2]=='F') ans[3]=1;
        if(s1[2]=='F')
            if(s2[2]=='D') ans[3]=1;
    }
    cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];

    return 0;
}
