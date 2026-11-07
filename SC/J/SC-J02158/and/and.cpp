#include<bits/stdc++.h>
using namespace std;
const int N=200100;
int n,m;
int a[N];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	a[n+1]=a[1];
	if(m==1)
	{
		int maxn=-1;
		for(int i=1;i<=n;i++)
			maxn=max(maxn,a[i]);
		cout<<maxn;
	}
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)
			ans=ans&a[i];
		cout<<ans;
	}
	else if(m==n-1)
	{
		int maxn=-1,ans;
		for(int i=1;i<=n;i++)
		{
			ans=a[i+1];
			for(int j=1;j<=n;j++)
			{
				if(i!=j&&j!=1+i)
					ans=ans&a[i];	
			}
			maxn=max(maxn,ans);
		}
		cout<<maxn;
	}
	else
	{
		int maxn=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
					maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
	}
	return 0;
 } 