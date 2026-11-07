#include<bits/stdc++.h>
using namespace std;
int n,m,maxn=-1,a[200005],q;
void dfs(int ans,int w,int h,bool x)
{
	if(ans==m)
	{
		if(h>maxn)
		{
			maxn=h;
		}
	}
	if(w>n)
	{
		return ;
	}
	int q=h;
	if(!x)
	{
		h=a[w];
	}
	else
	{
		h&=a[w];
	}
	dfs(ans+1,w+1,h,true);
	dfs(ans,w+1,q,x);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]>maxn)
			{
				maxn=a[i];
			}
		}
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j)
				{
					continue;
				}
				q=a[i]&a[j];
				if(q>maxn)
				{
					maxn=q;
				}
			}
		}
	}
	else if(m==n)
	{
		maxn=a[1];
		for(int i=2;i<=n;i++)
		{
			maxn&=a[i];
		}
	}
	else
	{
		dfs(0,1,0,false);
	}
	cout<<maxn;
	return 0;
}
