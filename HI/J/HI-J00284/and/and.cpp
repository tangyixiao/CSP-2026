#include<bits/stdc++.h>
using namespace std;

int n,m,maxn = 0,b = 0,j,s = 0;
int a[200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		if (i == 2)
		    j = a[i] & a[i - 1];
		if (i != 1 && (j & a[i] != j))
		    b = 1;
		s = max(s,a[i]);
	}
	if (b == 0)
	{
		cout << j;
		return 0;
	}
	if (m == 1)
	{
		cout << s;
		return 0;
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = i + 1;j <= n;j++)
		{
			maxn = max(maxn,a[i] & a[j]);
		}
	}
	cout << maxn;
	return 0;
}

