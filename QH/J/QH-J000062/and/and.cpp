#include <bits/stdc++.h>
using namespace std;
long long n,m,ans=-1;
long long a[2005];
long long q(long long b)
{
	long long ans1;
	a[b+1]=a[b+1]&a[b];
	for(long long i=b+2;i<=b+m-1;i++)
	{
		a[i]=a[i-1]&a[i];
	}
	return a[b+m-1];
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=1;i<=n-m+1;i++)
	{
		ans=max(q(i),ans);
	}
	cout<<ans;
	return 0;
}
