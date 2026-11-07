#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000002],sum,t;
bool dep[2000002],g;
void dfs(int f)
{
	if(f>m)
	{
		g=0;
		for(int i=1;i<=n;i++)
		{
			if(dep[i]&&!g)
			{
				t=a[i];
				g=1;
				t=t&a[i];
			}
			else
			{
				if(dep[i])
				{
					t=t&a[i];
				}
			}
		}
		sum=max(sum,t);
		t=0;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(dep[i]==0)
		{
			dep[i]=1;
			dfs(f+1);
			dep[i]=0;
		}
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
	dfs(1);
	cout<<sum;
	return 0;
}
