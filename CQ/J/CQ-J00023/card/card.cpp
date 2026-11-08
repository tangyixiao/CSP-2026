#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;
int n,m;
int mp1[N],mp[N];
int a[N];
signed main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>=1;i--) mp[a[i]]=max(mp[a[i]],i);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            mp1[a[j]]++;
            if(mp[a[j]]!=j) j=mp[a[j]];
        }
    }
    for(int i=1;i<=m;i++) cout<<mp1[i]<<" ";
    return 0;
}