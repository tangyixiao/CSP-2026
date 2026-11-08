#include <bits/stdc++.h>
using namespace std;
long long a[200005],c=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if (n==m)
	{
		long long x=1;
		for (int i=1;i<=n;i++)
		{
			x=(x&a[i]);
		}
		cout<<x;
		return 0;
	}
	if (m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if (m==2)
	{
		for (int i=1;i<=n;i++)
		{
			long long x=a[i];
			for (int j=i+1;j<=n;j++)
			{
				x=(x&a[j]);
				if (x>c)
				{
					c=x;
				}
			}
		}
		cout<<c;
		return 0;
	}
	if (m==n-1)
	{
		long long x=1;
		int q=1;
		for (int i=1;i<=n;i++)
		{
			x=1;
			for (int j=1;j<=n;j++)
			{
				if (j==q)
				{
					continue;
				}
				x=(x&a[j]);
			}
			if (x>c)
			{
				c=x;
			}
			q++;
		}
		cout<<x;
		return 0;
	}
	return 0;
}
