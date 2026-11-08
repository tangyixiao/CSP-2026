#include<bits/stdc++.h>
using namespace std;
namespace RST
{
    pair<long long,char>a[200005];
    bool cmp(pair<long long,char>x,pair<long long,char>y)
    {
        return x.first<y.first;
    }
    void solve()
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        for(int i=1;i<=n;i++)
        {
            a[i].first+=a[i-1].first;
        }
        if(a[n].first==1)
        {
            cout<<0;
            return ;
        }
        long long midp=(a[n].first+1)>>1;
        long long mid=lower_bound(a+1,a+n+1,(pair<long long,char>){midp,'\0'})-a;
        a[++n]={midp,a[mid].second};
        sort(a+1,a+n+1);
        /*for(int i=1;i<=n;i++)
        {
            cerr<<a[i].first<<" "<<a[i].second<<"\n";
        }*/
        int l=1,r=n;
        long long L=1,R=a[n].first;
        long long ans=0;
        while(l<r)
        {
            //cerr<<l<<" "<<r<<"\n";
            auto t=min(a[l].first-L+1,R-a[r-1].first);
            if(a[l].second!=a[r].second)
            {
                ans+=t;
            }
            L+=t,R-=t;
            while(L>a[l].first)
            {
                l++;
            }
            while(R<=a[r-1].first)
            {
                r--;
            }
        }
        cout<<ans;
        return;
    }
}
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--)
    {
        RST::solve();
    }
    return 0;
} //g++ -o string.exe string.cpp -lm -O2 -static -std=c++14 -Wall -Wl,--stack=1000000000
/*
T1<T3<T4<T2
rp++
*/