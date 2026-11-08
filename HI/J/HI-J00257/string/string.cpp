#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i] >> c[i];
	}
	if (n == 1)
	{
		cout << 0;
	}
	else if (n == 2)
	{
		if (c[0] == c[1])
		{
			cout << 0;
		}
		else
		{
			cout << min(a[0],a[1]);
		}
	}
	else
	{
		string s1,s2;
		int cnt = n;
		n /= 2;
		int z = 0;
		for (int j = 0;j < n;j++)
		{
			for (int k = 0;k < a[j];k++)
			{
				s1 += c[z];
			}
			z++;
		}
		int x = cnt;
		for (int j = cnt;j > n+1;j--)
		{
			for (int k = a[j];k >= 1;k--)
			{
				s2 += c[x];
			}
			x--;
		}
		int pre = 0;
		for (int v = 0;v < n;v++)
		{
			if (s1[v] != s2[v])
			{
				pre++;
			}
		}
		cout << pre;
	}
	return 0;
}
