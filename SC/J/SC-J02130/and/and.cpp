#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,mx=0;
int dfs(int k,int t,int i)
{
	if(i>m)return k;
	int lmx=0;
	if(i>1)
	{
		k&=a[t];
	}
	for(int j=t+1;j+m-i-1<=n;j++)
	{
		lmx=max(lmx,dfs(k,j,i+1));
	}
	return lmx;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		//cin>>a[i];
	}
	if(m==n)
	{
		mx=a[1];
		for(int i=2;i<=n;i++)
		{
			mx&=a[i];
		}
		cout<<mx;
		return 0;
	}
	if(m==n-1)
	{
		mx=a[2];
		for(int j=3;j<=n;j++)
		{
			mx&=a[j];
		}
		for(int i=2;i<=n;i++)
		{
			int lmx=a[1];
			for(int j=2;j<=n;j++)
			{
				if(j!=i)lmx&=a[j];
			}
			mx=max(mx,lmx);
		}
		cout<<mx;
		return 0;
	}
	for(int i=1;i+m-1<=n;i++)
	{
		mx=max(mx,dfs(a[i],i,1));
	}
	cout<<mx;
	return 0;
}