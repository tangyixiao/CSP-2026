#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	int n,m,maxn=0;
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	if (m==1)
	{
		for (int i=1;i<=n;i++)
		{
			maxn=max(maxn,a[i]);
		}
	}
	else
	{
		for (int i=1;i<n;i++)
		{
			for (int j=i+1;j<=n;j++)
			{
				int x=a[i]&a[j];
				maxn=max(maxn,x);
			}
		}
	}
	cout << maxn;
	return 0;
}
