#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N],b[N],c[N],n,m,x=1,maxx=LLONG_MIN;
void dfs(long long k,long long s)
{
	if(s==m+1)
	{
		long long q=0;
		q=c[1]&c[2];
		for(int i=3;i<x;i++)
		{
			q=q&c[i];
		}
		maxx=max(maxx,q);
		return;
	}
	for(int i=k;i<=n;i++)
	{
		if(b[i]==0)
		{
			c[x]=a[i];
			b[i]=1;
			x++;
			dfs(i,s+1);
			b[i]=0;
			x--;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1)
	{
		cout<<maxx;
		return 0;
	}
	maxx=LLONG_MIN;
	dfs(1,1);
	cout<<maxx;
	return 0;
}