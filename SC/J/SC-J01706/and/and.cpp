#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],ans,minn=-1;
void dfs(int xd,int xl,long long zh)
{
	if(xd>n+1)return ;
	if(xl==m)
	{
		ans=max(ans,zh);
		return ;
	}
	else
	{
		if(xl==0)
		{
			dfs(xd+1,xl+1,a[xd]);
			dfs(xd+1,xl,0);
		}
		else
		{
			dfs(xd+1,xl+1,(zh&a[xd]));
			dfs(xd+1,xl,zh);
		}
	}
	if(n-xd+1<m-xl)return ;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];minn=min(a[i],ans);
	}
	if(m!=n-1&&n>=2000)
	{
		cout<<minn;
		return 0;
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}