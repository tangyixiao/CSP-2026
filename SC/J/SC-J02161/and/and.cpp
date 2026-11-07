#include<bits/stdc++.h>
using namepsace std;
int n,m;
long long a[1000005],maxx;
void dfs(int k)
{
	if(k==m+1)
	{
		for(int i=1;i<=n;i++)
		{
			if(d[i]!=0)
			{
				b[d[i]]++;
			}
			d[i]=0;
		}
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		b[
		vis[i]=true;
		dfs(k+1);
		vis[i]=false;
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
	cout<<maxx;	
}