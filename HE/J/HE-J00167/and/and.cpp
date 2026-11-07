#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long maxn=-10000;
	bool yes=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
		if((a[i]+1)/2!=0) yes=0;
	}
	if(m==1)
	{
		cout<<maxn;
		return 0;
	}
	if(m==2)
	{
		long long maxx=-10000;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==n)
	{
		long long maxx=a[1];
		for(int i=2;i<=n;i++)
		{
			maxx&=a[i];
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-1)
	{
		long long maxx=-10000;
		for(int i=1;i<n;i++)
		{
			long long num=a[1];
			if(i==1) num=a[2];
			for(int j=1;j<=n;j++)
			{
				if(j==i) continue;
				num&=a[i];
			}maxx=max(maxx,num);
		}
		cout<<maxx;
		return 0;
	}
	if(yes)
	{
		sort(a+1,a+1+n);
		int maxx=-10000;
		for(int i=n;i>=n-m+1;i--)
		{
			maxx&=a[i];
		}cout<<maxx;
		return 0;
	}
	return 0;
} 
