#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],MAX=0;
int maxx(long long i,long long x,long long maxn)
{
	if(x==0)
		return maxn;
	else
	{
		for(int j=i+1;j<=n;j++)
		{
			MAX=max(MAX,maxx(j,x-1,maxn&a[j]));
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
		maxx(i,m-1,a[i]);
	cout<<MAX;
	return 0;
}
