#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int a[maxn];
//int cal(int x,int m,int n)
//{
//	int maxn=0;
//	while(m--)
//	{
//		for(int i=1;i<=n;i++)
//		{
//			int nw=x&a[i];
//			maxn=max(maxn,n);
//		}
//		x=maxn;
//	}
//	return maxn;
//}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==n)
	{
		maxn=a[1];
		for(int i=2;i<=n;i++)
		{
			maxn=maxn&a[i];
		}
		cout<<maxn;
		return 0; 
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int nx=a[m]&a[n];
			maxn=max(maxn,nx);
		}
	}
	cout<<maxn;
//	sort(a+1,a+n+1);
//	int maxn=0,nw;
//	for(int i=n;i>=1;i++)
//	{
//		nw=cal(i,m,n);
//		maxn=max(maxn,nw);
//	}
//	cout<<maxn;
	return 0;
}
