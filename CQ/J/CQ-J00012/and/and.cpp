#include <bits/stdc++.h>
#define double long double
#define int long long
using namespace std;
const double eps=1e-6;
const int inf=0x3f3f3f3f3f3f3f3f,N=2e5+10;
vector<int> us;
int a[N];
int n,m,ans=0;
void solve()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        us.push_back(a[i]);
    }
    for (int i=30;i>=0;i--)
    {
        vector<int> temp;
        int cnt=0;
        for (int j:us)
        {
            if ((j>>i)&1)
            {
                cnt++;
                temp.push_back(j);
            }
        }
        if (cnt>=m)
        {
            swap(temp,us);
            ans+=(1<<i);
        }
    }
    cout<<ans<<'\n';
    return;
}
signed main()
{
    // freopen("and/and5.in","r",stdin);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
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
g++ and.cpp -o andd -std=c++14 -O2
./andd
*/