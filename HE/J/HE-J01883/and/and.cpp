#include<bits/stdc++.h>
using namespace std;
long long a[200010];
bool x[200005][35],vis[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n=0,m=0,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int e=1;
		long long xx=a[i];
		while(xx)
		{
			x[i][e]=xx%2;
			xx/=2;
			e++;
		}
	}
	bool eee=1;
	for(int i=33;i>=1;i--)
	{
		int all=0;
		bool vis1[200010]={};
		if(eee)
		{
			for(int j=1;j<=n;j++)
			{
				//cout<<x[j][i];
				if(x[j][i])
				{
					all++;
					vis1[j]=1;
				}
			}
		}
		else 
		{
			for(int j=1;j<=n;j++)
			{
				if(x[j][i]&&vis[j])
				{
					all++;
					vis1[j]=1;
				}
			}
		}
		if(all>=m)
		{
			for(int j=1;j<=n;j++)vis[j]=vis1[j];
			eee=0;
		}
	}
	bool ee=1;
	for(int i=1;i<=n;i++)
	{
		if(vis[i])
		{
			if(ee)
			ee=0,ans=a[i];
			else ans=ans&a[i];
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
/*
5 3
31 3 1 15 7
*/
