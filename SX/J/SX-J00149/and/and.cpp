#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=i-1)	f=0;
	}
	if(f)
	{
		long long ans=n-1;
		for(int i=n-2;i>=n-m;i--)	ans&=i;
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	if(m==1)
	{
		cout<<a[1];
		return 0;
	}
	if(m==n)
	{
		long long ans=a[1];
		for(int i=2;i<=n;i++)	ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		long long ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(ans<(a[i]&a[j]))
				{
					ans=(a[i]&a[j]);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==3)
	{
		long long ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					if(ans<(a[i]&a[j]&a[k]))
					{
						ans=(a[i]&a[j]&a[k]);
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	long long ans=a[1];
	for(int i=2;i<=m;i++)	ans&=a[i];
	cout<<ans;
	return 0;
}
/*
相同为1，不同为0
*/