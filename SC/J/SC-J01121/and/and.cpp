#include<bits/stdc++.h>
using namespace std;
int n,m;
long long maxx,a[200005];
bool f[200005];
void dfs(int k,long long sum)
{
	if(k==m)
	{
		maxx=max(maxx,sum);
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(f[i]==false)
		{
			f[i]=true;
			if(k==0)
			{
				dfs(k+1,a[i]);
			}
			else
			{
				dfs(k+1,sum&a[i]);
			}
			f[i]=false;
		}	
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1)
	{
		cout<<maxx;
	}
	else if(m==n)
	{
		for(int i=2;i<=n;i++)
		{
			a[i]&=a[i-1];
		}
		cout<<a[n];
	}
	else if(m==2)
	{
		maxx=0;
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxx=max(maxx,(a[i]&a[j]));
			}
		}
		cout<<maxx;
	}
	else
	{
		maxx=0;
		dfs(0,0);
		cout<<maxx;
	}
	return 0;
} 