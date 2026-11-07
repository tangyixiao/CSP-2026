#include<bits/stdc++.h>
using namespace std;
long long a[200005],maxl,zz;
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxl=max(maxl,a[i]);
	}
	if(m==1)
	{
		cout<<maxl;
		return 0;
	}
	if(m==n)
	{
		zz=a[1];
		for(int i=2;i<=n;i++)
		{
			zz=a[i]&zz;
		}
		cout<<zz;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				zz=max(zz,a[i]&a[j]);
			}
		}
		cout<<zz;
		return 0;
	}
	for(int k=1;k<=n-m+1;k++)
	{
		long long maxll=0;
		zz=a[k];
		for(int i=k+1;i<=n;i++)
		{
			zz=zz&a[i];
			long long zzz=zz&a[i+1];
			for(int j=2;j<=m;j++)
			{
				zzz=max(zzz,zz&a[i+j]);
			}
			maxll=max(zzz,maxll);
			zz=a[k];
		}
		cout<<maxll;
		return 0;
	}
	return 0;
}
