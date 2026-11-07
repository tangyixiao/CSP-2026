#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int res = 0;
void dfs(int now,int cnt,int ans)
{
	if(cnt==m)
	{
		res = max(res,ans);
		return;
	}
	if(now==n+1)
	return;
	dfs(now+1,cnt,ans);
	dfs(now+1,cnt+1,ans&a[now]);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n<=500)
	{
		dfs(0,0,524287);
		cout<<res;
		return 0;
	}
	if(m==1)
	{
		for(int i = 0;i<n;i++)
		res = max(res,a[i]);
		cout<<res;
		return 0;
	}
	if(m==n)
	{
		res = a[0];
		for(int i = 1;i<n;i++)
		{
			res&=a[i];
		}
		cout<<res;
		return 0;
	}
	if(m==n-1)
	{
		int minn = 10000;
	    for(int i = 0;i<n;i++)
		minn = min(minn,a[i]);
		for(int i = 0;i<n;i++)
		{
			if(a[i]!=minn)
			{
				res&=a[i];
			}
		}
		cout<<res;
		return 0;
	}
	if(m==2)
	{
		for(int i = 0;i<n-1;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				res = max(res,a[i]&a[j]);
			}
		}
		cout<<res;
		return 0;
	}
	bool fg = true;
	for(int i = 0;i<n;i++)
	{
		int x = a[i];
		while(x>>=1)
		{
			if(x&1==0)
			fg = false;
			break;
		}
		if(fg==false)
		break;
	}
	if(fg==true)
	{
		sort(a,a+n);
		cout<<a[n-m];
		return 0;
	}
	else
	cout<<4;
	return 0;
}
