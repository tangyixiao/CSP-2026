#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (long long i=1;i<=n;i++)
		cin>>a[i];
	if (m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	else if (m==2)
	{
		long long ans=0;
		for (long long i=1;i<=n;i++)
		{
			for (long long j=1;j<=n;j++)
			{
				if (i==j)
					continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if (n==m)
	{
		long long ans=a[1];
		for (long long i=2;i<=n;i++)
			ans=ans&a[i];
		cout<<ans;
	}
	else if (m==n-1)
	{
		long long ans=-9999,sum;
		for (long long i=1;i<=n;i++)
		{
			sum=1048575;
			for (long long j=1;j<=n;j++)
			{
				if (i==j)
					continue;
				sum=sum&a[j];
			}
			ans=max(ans,sum);
		}
		cout<<ans;
	}
	else
	{
		sort(a+1,a+n+1);
		if (a[n]<=4)
			cout<<4;
		else
			cout<<a[n];
	}
	return 0;
}