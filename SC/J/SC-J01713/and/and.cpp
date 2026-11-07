#include<bits/stdc++.h>
using namespace std;
long long n,m,l=0;
long long a[200050];
int dp(long long u,long long l,long long y,long long li)
{
	if(l>m)
	{
		return u;
	}
	if(li+y>n)
	{
		return 0;
	}
	int yu=u&a[li+y];
	int j=dp(yu,++l,++y,li);
	l--,y--;
	int o=dp(u,l,++y,li);
	return max(j,o);
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.ans","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int o=INT_MIN;
	for(long long i=1;i<=n;i++)
	{
		o=max(o,dp(a[i],1,0,i));
	}
	cout<<o;
	return 0;
}