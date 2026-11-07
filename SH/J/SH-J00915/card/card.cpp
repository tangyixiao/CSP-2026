#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int f,ff;
int ans[300005];
int vis[300005];
int a[500005];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	int p=1; 
	for(int j=1;j<=n;j++)
	{
		memset(vis,0,sizeof(vis));
		for(int i=p;i<=n;i++)
        {
    	if(vis[a[i]]==0)
    	{
    	    vis[a[i]]=1;
        }
        else
        {
        	ff=0;
        	for(int k=p;k<=i-1;k++)
        	{
        		if(a[k]==a[i])
        		{
        			f=k;
        			ff=1;
				}
			}
			for(int k=f;k<=i-1;k++)
			{
				vis[a[k]]=0;
			}
        	vis[a[i]]=1;
	 	}
	    } 
	    for(int i=1;i<=m;i++)
	    {
	    	if(vis[i]==1)
	    	{
	    		ans[i]++;
			}
		}
		p++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
