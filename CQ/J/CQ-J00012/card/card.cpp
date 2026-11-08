#include <bits/stdc++.h>
#define double long double
#define int long long
using namespace std;
const double eps=1e-6;
const int inf=0x3f3f3f3f3f3f3f3f,N=5e5+10,M=3e5+10;
bool vis[M];
int a[N],ans[M];
int n,m;
void solve()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (int T=1;T<=n;T++)
    {
        vector<int> temp;
        memset(vis,0,sizeof vis);
        for (int i=T;i<=n;i++)
        {
            if (vis[a[i]])
            {
                while (temp.back()!=a[i])
                {
                    vis[temp.back()]=false;
                    temp.pop_back();
                }
            }
            else
            {
                temp.push_back(a[i]);
                vis[a[i]]=true;
            }
        }
        for (int i=1;i<=m;i++)
        {
            ans[i]+=vis[i];
            // cerr<<T<<':'<<i<<' '<<vis[i]<<'\n';
        }
    }
    for (int i=1;i<=m;i++)
    {
        cout<<ans[i]<<(i==m?'\n':' ');
    }
    return;
}
signed main()
{
    // freopen("card/card4.in","r",stdin);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TestCase=1;
    // cin>>TestCase;
    for (int CaseId=1;CaseId<=TestCase;CaseId++)
    {
        solve();
    }
    return 0;
}


/*
g++ card.cpp -o cardd -std=c++14 -O2
./cardd
diff card.out card/card4.ans
*/