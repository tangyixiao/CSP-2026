#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(m==n-1)
	{
		int now=1,maxn;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
			a[i]&=now;
		}
		maxn=now|a[1];
		for(int i=2;i<=n;i++)
		{
			maxn=max(maxn,now|a[i]);
		}
		cout << maxn;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	if(n==m)
	{
		int nowa=1;
		for(int i=1;i<=n;i++)
		{
			nowa&=a[i];
		}
		cout << nowa;
		return 0;
	}
	else if(m==1)
	{
		sort(a+1,a+n+1);
		cout << a[n];
		return 0;
	}
	else if(m==2)
	{
		sort(a+1,a+n+1);
		int y=-1;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				y=max(y,a[i]&a[j]);
			}
		}
		cout << y;
		return 0;
	}
	sort(a+1,a+n+1);
	if(a[n]<4)	
	{
		int mks=1;
		for(int i=n;i>=n-m+1;i--)
		{
			mks&=a[i];
		}
		cout << mks;
		return 0;
	}
}
