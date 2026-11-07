#include<bits/stdc++.h>
using namespace std;
long long a[500001];
long long f[500001];
long long x[300001];
long long ans[300001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1; i<=n; i++)
		cin>>a[i];
	for(long long i=1; i<=n; i++)
	{
		long long r=1;
		for(long long j=i; j<=n; j++)
		{
			if(x[a[j]]!=0)
			{
				long long k=r;
				r=x[a[j]]+1;
				for(long long s=r; s<k; s++)
					x[f[s]]=0;
			}
			else
			{
				x[a[j]]=r;
				f[r]=a[j];
				r++;
			}
		}
		for(long long j=1; j<r; j++)
			ans[f[j]]++;
		for(long long j=1; j<=n; j++)
			f[j]=0;
		for(long long j=1; j<=m; j++)
			x[j]=0;
	}
	for(int i=1; i<=m; i++)
		cout<<ans[i]<<" ";
	return 0;
} 
