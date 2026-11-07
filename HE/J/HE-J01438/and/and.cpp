#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];long long ans;
void dfs(int step,long long sum,int k)
{
    if(k>m)return ;
    if(step>=n)
    {
        if(k==m)
        {
            ans=max(ans,sum);
        }
        return;
    }
    dfs(step+1,sum,k);
    long long p=sum&a[step+1];
    dfs(step+1,p,k+1);

}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    dfs(0,2e32-1,0);
    cout<<ans;
    return 0;
}
