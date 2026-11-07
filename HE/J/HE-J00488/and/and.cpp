#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m;
long long a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=0;i<n;i++)
		cin>>a[i];
	if (n<=20)
	{
		long long ans=0;
		for (int i=0;i<(1<<n);i++)
		{
			if (__builtin_popcount(i)!=m) continue;
			long long res=(1<<31)-1;
			for (int j=0;j<n;j++)
			{
				if (i&(1<<j))
				{
					res=(res&a[j]);
				}
			}
			ans=max(ans,res);
		}
		cout<<ans;
		return 0;
	}
	if (m==1)
	{
		long long ans=0;
		for (int i=0;i<n;i++)
			ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if (m==2)
	{
		long long ans=0;
		for (int i=1;i<=n;i++)
		{
			for (int j=i+1;j<=n;j++)
			{
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	if (m==n)
	{
		long long ans=a[1];
		for (int i=2;i<=n;i++)
			ans&=a[i];
		cout<<ans;
		return 0;
	}
	long long ans=0;
	for (int i=0;i<n;i++)
		ans=max(ans,a[i]);
	cout<<ans;
	return 0;
}
