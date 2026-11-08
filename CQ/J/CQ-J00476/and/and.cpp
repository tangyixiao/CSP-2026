#include<bits/stdc++.h>
using namespace std;
namespace RST
{
    int a[200005];
    void solve()
    {
        int n,m;
        cin>>n>>m;
        vector<int>coll;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            coll.push_back(a[i]);
        }
        int ans=0;
        for(int k=30;k>=0;k--)
        {
            int cnt=0;
            for(auto i:coll)
            {
                if(i&(1<<k))
                {
                    ++cnt;
                }
            }
            if(cnt>=m)
            {
                auto tmp=coll;
                coll.clear();
                for(auto i:tmp)
                {
                    if(i&(1<<k))
                    {
                        coll.push_back(i);
                    }
                }
                ans+=(1<<k);
            }
        }
        cout<<ans;
        return;
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--)
    {
        RST::solve();
    }
    return 0;
} //g++ -o and.exe and.cpp -lm -O2 -static -std=c++14 -Wall -Wl,--stack=1000000000
//感觉T3<T2
//T2 太难调了呜呜呜
//rp++