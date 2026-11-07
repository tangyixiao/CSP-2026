#include<bits/stdc++.h>
using namespace std;
long long m,n,a[200005],s;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>m>>n;
	for(long long i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		sort(a+1,a+m+1);
		cout<<a[m];
		return 0;
	}
	if(n==m)
	{
		long long sm=a[1];
		for(long long i=2;i<=m;i++)
		{
			sm=sm & a[i];
		}
		cout<<sm;
		return 0; 
	}
	if(m-1==n)
	{
		for(long long i=1;i<=m;i++)
		{
			long long sm=0;
			if(i==1)
			{
				sm=a[2];
			}
			else
			{
				sm=a[1];
			}
			for(long long j=1;j<=m;j++)
			{
				if(i==j)
				{
					continue;
				}
				sm=sm & a[j]; 
			}
			s=max(sm,s);
		}
		cout<<s;
		return 0;
	}
	for(long long i=1;i<=m;i++)
	{
		long long sm=a[i];
		for(long long j=i+1;j<=m;j++)
		{
			sm=max(sm,a[i] & a[j]);
		}
		s=max(sm,s);
	}
	cout<<s;
	return 0;
} 
