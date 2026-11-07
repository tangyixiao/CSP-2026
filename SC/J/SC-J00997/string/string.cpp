#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> a;
map<int,char> mp;
int f(int ax)
{
    return lower_bound(a.begin(),a.end(),ax)-a.begin();
}
signed main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m=0,z=0; cin>>n;
    a.push_back(0);
    for(int x=0;x<n;x++)
    {
        int ax; char c;
        cin>>ax>>c;
        a.push_back(m+ax);
        m+=ax;
        mp[x+1]=c;
    }
    // for(auto x:a) cout<<x<<' ';
    // cout<<"\n\n";
    for(int x=1,y=m;;)
    {
        if(x>=y-1) break;
        int fx=f(x),fy=f(y);
        int fxx,fyy;
        if(x==a[fx]) fxx=a[fx]+1;
        else fxx=a[fx];
        if(y==a[fy-1]) fyy=a[fy-1]-1;
        else fyy=a[fy-1];
        // cout<<"\nx : "<<x<<"\ny : "<<y<<"\nfx : "<<f(x)<<"\nfy : "<<f(y)<<"\nz : "<<z<<"\nfxx : "<<fxx<<"\nfyy : "<<fyy<<"\n\n";
        if(fxx-x>y-fyy)
        {
            if(mp[fx]!=mp[fy])
                z+=y-fyy;
            y=fyy;
            x+=fyy-y;
        }
        else
        {
            if(mp[fx]!=mp[fy])
                z+=fxx-x;
            x=fxx;
            y-=fxx-x;
        }
    }
    cout<<z;
    cout<<'\n';
    return 0;
}
// _ aa bb c
// 0  2  4 5 
// 0  1  2 3