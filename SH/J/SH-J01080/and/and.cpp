#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],maxn;
void dfs(int step,int p,long long q)
{
    if(step>n) return ;
    if(p==m)
    {
        maxn=max(maxn,q);
        return ;
    }
    for(int i=0;i<=1;i++)
    {
        if(i)
        {
            if(p==0)
            {
                dfs(step+1,p+1,a[step]);
            }
            else
            {
                dfs(step+1,p+1,q&a[step]);
            }
        }
        else dfs(step+1,p,q);
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dfs(1,0,1);
    cout<<maxn;
    return 0;
}
