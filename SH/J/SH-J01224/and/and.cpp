#include <bits/stdc++.h>
using namespace std;
int a[200001],maxn=0,n,m;
int tao(int i,int b,int xian)
{
	if(xian==m)
		return max(b,maxn);
	int j;
	for(j=i+1;j<=n;j++)
		tao(j,b&a[j],xian+1);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1)
	{
		int k=0;
		for(int i=1;i<=n;i++)
			if(a[i]>k)
				k=a[i];
		cout<<k<<endl;
		return 0;
	}
	if(m==n)
	{
		int k=a[1];
		for(int i=2;i<=n;i++)
			k&=a[i];
		cout<<k;
		return 0;
	}
	if(m==2)
	{
		int k=0;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				k=max(k,a[i]&a[j]);
		cout<<k<<endl;
		return 0;
	}
	if(m==n-1)
	{
		int k=a[1];
		for(int i=2;i<=n;i++)
			k&=a[i];
		for(int i=1;i<=n;i++)
			maxn=max(maxn,k|a[i]);
		cout<<maxn<<endl;
		return 0;
	}
	for(int i=1;i<=n-m+1;i++)
		maxn=max(maxn,tao(i,a[i],1));
	cout<<maxn<<endl;
	return 0;
}
