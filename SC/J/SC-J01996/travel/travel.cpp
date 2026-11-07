#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string v1,s1,v2,s2;cin>>v1>>s1>>v2>>s2;
    if(v1!=v2)
    {
        cout<<0;cout<<0;cout<<0;cout<<0;
        return 0;
    }
    cout<<1;
    if(s1[0]==s2[0] && s1[1]==s2[1]) cout<<1;
    else{cout<<0;cout<<0;cout<<0;return 0;}
    int sn1=s1[2],sn2=s2[2];
    if(sn1+1==sn2  || sn1-1==sn2)
        cout<<1;
    else
        cout<<0;
    if((s1[2]=='F' && s2[2]!='D') || (s1[2]=='D' && s2[2]!='F'))
        cout<<1;
    else
        cout<<0;
    return 0;
}
