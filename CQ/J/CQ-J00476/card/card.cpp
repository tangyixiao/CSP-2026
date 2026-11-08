#include<bits/stdc++.h>
using namespace std;
namespace RST
{
    int ans[300005];
    int a[500005],nxt[500005];
    int lst[300005];
    vector<int>eg[500005];
    int n,m;
    int r[500005],cnt[500005];
    void topsort()
    {
        queue<int>q;
        for(int i=1;i<=n;i++)
        {
            cnt[i]=1;
            if(r[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            if(nxt[p]==p)
            {
                //cerr<<p<<" "<<a[p]<<" "<<cnt[p]<<"\n";
                ans[a[p]]+=cnt[p];
            }
            for(auto i:eg[p])
            {
                r[i]--;
                cnt[i]+=cnt[p];
                if(!r[i])
                {
                    q.push(i);
                }
            }
        }
    }
    void solve()
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=n;i>=1;i--)
        {
            if(lst[a[i]])
            {
                nxt[i]=lst[a[i]];
            }
            else
            {
                nxt[i]=i;
            }
            lst[a[i]]=i;
        }
        for(int i=n;i>=1;i--)
        {
            if(nxt[i]!=i)
            {
                eg[i].push_back(nxt[i]);
                r[nxt[i]]++;
            }
            else
            {
                if(i+1<=n)
                {
                    eg[i].push_back(i+1);
                    r[i+1]++;
                }
            }
        }
        topsort();
        /*for(int i=1;i<=n;i++)
        {
            cerr<<cnt[i]<<" ";
        }
        cerr<<"\n";*/
        for(int i=1;i<=m;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return;
    }
}
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--)
    {
        RST::solve();
    }
    return 0;
} //g++ -o card.exe card.cpp -lm -O2 -static -std=c++14 -Wall -Wl,--stack=1000000000
//freopen("club.in","r",stdin);
//feropen("club.in","w",stdin);
//freopen("club.in","w",stdout);
//freopen("club.in","r",stdout);
//feropen("club.in","r",stdout);
//freopen("club.out",r,stdout);
//freopen("club.in",w,stdout);
//freopen("club.in","r",stdin);
//为什么 12:00 才结束呀
//
//rp++