#include<bits/stdc++.h>
using namespace std;
int n,m,f[200005];
long long a[200005],p=-1;
long long l=-1;
void dfs(int d,long long b)
{
	if (d==m)
	{
		l=max(l,b);
		return ;
	}
	for (int i=1;i<=n;i++)
	{
		if (f[i]==0)
		{
			f[i]=1;
			dfs(d+1,b&a[i]);
			f[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		p=max(p,a[i]);
	}
	if (n>=14000)
	{
		cout<<p<<endl;
		return 0;
	}
	dfs(0,(long long)68719476735);
	cout<<l<<endl;
	return 0;
} 
/*
4 2
3 15 12 12
*/
