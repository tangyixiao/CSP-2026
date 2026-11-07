#include<bits/stdc++.h>
using namespace std;
const int N=2e8,M=2e5;
int a[N];
int b[M];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxv=-2e8;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m=1)
	{
		for(int i=1;i<=n;i++)
		{
			maxv=max(maxv,a[i]);
		}
		cout<<maxv;
		return 0;
	}
	int k=0;
	for(int i=1;i<=m;i++)
	{
		int maxg=-2e9;
		for(int j=1;j<=n;j++)
		{
			maxg=maxv;
			maxv=max(maxv,a[j]);
			if(maxv!=maxg) k=j;
		}
		b[i]=maxv;
		maxv=-2e9;
		a[k]=-2e9;
	}
	int g=b[1]&b[2];
	for(int i=2;i<=m;i++)
	{
		g=g&b[i+1];
	}
	cout<<g;
	return 0;
}