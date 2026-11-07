#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
stack<int>s;
bool vis[300005];
int a[500005];
int ans[300005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=j;i<=n;i++)
        {
            int ax=a[i];
            if(!vis[ax])
            {
                s.push(ax);
                vis[ax]=1;
            }
            else
            {
                while(s.top()!=ax)
                {
                    vis[s.top()]=0;
                    s.pop();
                }
            }
        }
        for(int i=1;i<=m;i++)
        {
            if(vis[i])
            {
                ans[i]++;
                vis[i]=0;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
