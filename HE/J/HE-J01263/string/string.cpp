#include<bits/stdc++.h>
using namespace std;
int n, ans;
long long c[100000000], L = 1;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		int a, d;
		char b;
		cin >> a >> b;
		d = b - 96;
		for (int i = L;i < L+a;i++)
		{
			c[i] = d;
		}
		L += a;
	}
	for (int i = 1;i <= L/2;i++)
	{
		if (c[i] == c[L-i+1])
		{
			continue;
		}
		else
		{
			ans++;
		}
	}
	cout << ans-1;
	return 0;
}
