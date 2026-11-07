#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],mx;
void dfs(int s,int per,int now)
{
    if(s==m)
    {
        mx=max(mx,now);
    }
    for(int i=per;i<=n;i++)
    {
        if(n-i>=m-s)        
        {
            if(n-i+1>=m-s)
            {
            	dfs(s+1,i+1,now & a[i]);
            }
        }
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    dfs(0,1,(unsigned int)(1<<31)-1);
    printf("%d",mx);
    return 0;
}