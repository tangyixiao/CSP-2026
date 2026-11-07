#include<bits/stdc++.h>
using namespace std;
int a[200010];
int n,m,maxn = 0;
void dfs(int x,int sum,int i)
{
	if(x==m)
	{
		maxn = max(maxn,sum);
		return;
	}
	if(i>n)
	{
		return;
	}
	dfs(x+1,sum&a[i],i+1);
	dfs(x,sum,i+1);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin >>a[i];
	}
	for(int i = 1;i <= n-m+1;i++)
	{
		dfs(1,a[i],i+1);
	}
	cout <<maxn;
	return 0;
}
