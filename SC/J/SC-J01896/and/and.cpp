#include<bits/stdc++.h>
using namespace std;
int m,n,k;
int a[200100];
int c[200100];
int h=0;
void dfs(int g,int hh,int w)
{
	if(w<1||w>n||c[w]==1)
	{
		return;
	}
	if(g==m)
	{
		if(h<hh)
		{
			h=hh;
		}
		return;
	}
	c[w]=1;
	dfs(g+1,hh&a[w-1],w-1);
	dfs(g,hh,w-1);
	dfs(g+1,hh&a[w+1],w+1);
	dfs(g,hh,w+1);
	c[w]=0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		dfs(1,a[i],i);
	}
	printf("%d",h);
	return 0;
}