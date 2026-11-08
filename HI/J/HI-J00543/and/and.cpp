#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[100000];
	for(int i=0;i<n;i++) cin>>a[i];
	long long mx=0,sumi=0,sumj=0,last;
	for(long long  i=0;i<n;i++)
		for(long long j=0;j<n;j++)
			if(i!=j)
				if(mx<a[i]&a[j]) 
				{
					mx=a[i]&a[j];
					sumi=i;
					sumj=j;
				}
	a[sumi]=0;a[sumj]=0;
	for(long long i=0;i<m-2;i++)
	{
		long long nw=0;
		for(long long j=0;j<n;j++)
		{
			nw=max(nw,mx&a[j]);
		}
		mx=nw;
	}
	cout<<mx;
	return 0;
}
