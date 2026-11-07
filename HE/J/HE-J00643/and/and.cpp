#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],n,m,pos,cnt[40],ans;
vector<vector<int>> lis;
void f(int tot[40],vector<vector<int>>& lit,int j)
{
    if(j==-1){return;}
    if(tot[j]<m) f(tot,lit,j-1);
    if(tot[j]==m)
    {
        ans=lit[j][0];
        for(int i=1;i<lit[j].size();i++) ans&=lit[j][i];
        return;
    }
    if(tot[j]>m)
    {
        vector<vector<int>> l;
        l.resize(40);
        int count2[40];
        for(int j=31;j>=0;j--)
        {
            for(int v:lit[j])
            {
                if((v>>j)&1) count2[j]++,l[j].push_back(v);
            }
        }
        ans+=(1<<j);
        f(count2,l,j-1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    lis.resize(40);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int j=31;j>=0;j--)
    {
        for(int i=1;i<=n;i++)
        {
            if((a[i]>>j)&1) cnt[j]++,lis[j].push_back(a[i]);
        }
    }
    f(cnt,lis,31);
    cout<<ans;

    return 0;
}
