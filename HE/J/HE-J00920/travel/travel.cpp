#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string srx,sxx,srz,sxz;
    cin>>srx>>srz>>sxx>>sxz;
    if(srx==sxx)cout<<1;
    else cout<<0;
    if(srx==sxx&&srz[0]+srz[1]==sxz[0]+sxz[1])cout<<1;
    else cout<<0;
    if(srx==sxx&&srz[0]+srz[1]==sxz[0]+sxz[1])
    {
        if(srz[2]>='A'&&srz[2]<='C'&&sxz[2]>='A'&&sxz[2]<='C')cout<<1;
        else if(srz[2]>='D'&&srz[2]<='F'&&sxz[2]>='D'&&sxz[2]<='F')cout<<1;
        else cout<<0;
    }else cout<<0;
    if(srx==sxx&&srz[0]+srz[1]==sxz[0]+sxz[1])
    {
        if(srz[2]>='A'&&srz[2]<='C'&&sxz[2]>='A'&&sxz[2]<='C'&&(sxz[2]-srz[2]==1||sxz[2]-srz[2]==-1))cout<<1;
        else if(srz[2]>='D'&&srz[2]<='F'&&sxz[2]>='D'&&sxz[2]<='F')cout<<1;
        else cout<<0;
    }else cout<<0;
    return 0;
}
