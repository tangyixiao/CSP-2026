#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
long long f[200005];
long long n,m,ans=0,x,y;
long long lis[200005];
void dfs(long long i,long long mi,long long ans1)
{
	if(mi==0)
	{
		ans = max(ans1,ans);
		return;
	}
	if(i==n||i+mi>n)
	{
		if(mi==0)
		{
			ans = max(ans,ans1);
			return;
		}
		return;
	}
	dfs(i+1,mi-1,ans1&lis[i]);
	dfs(i+1,mi,ans1);
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		cin >> lis[i];
	}
	if(n>2000)
	{
		cout << n-m << endl;
		return 0;

	}
	if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			ans = max(ans,lis[i]);
		}
		cout << ans << endl;
		return 0;
	}
	if(m==n)
	{
		ans = lis[0];
		for(int i=1;i<n;i++)
		{
			ans = ans&lis[i];
		}
		cout << ans << endl;
		return 0;
	}
	if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				ans = max(ans,lis[i]&lis[j]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	dfs(1,m-1,lis[0]);
	dfs(1,m,2<<20-1);
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
