#include<bits/stdc++.h>
using namespace std;
void dfs(int x,int y)
{
    int m[100000],vis[100000];
    int step=0;
    if(step+1==x)
    {
        step=0;
        vis[0]=0;
    }
    for(int j=0;j<=x;j++)
    {
        cin>>m[j];
        step+=1;
        vis[j]=1;
    }
    return dfs(step+1)
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int a[10000];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dfs(n,m);
    return 0;

}
