#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int n, sum, ans;
int a[N];
char c[N];

signed main ()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string s;
		cin >> a[i] >> s;
		c[i] = s[0];
		sum += a[i];
		a[i] += a[i - 1];
	}
	for (int i = 1; i <= sum / 2; i++)
	{
		int L = 1, R = n;
		while (L < R)
		{
			int M = (L + R) >> 1;
			if (a[M] >= i) R = M;
			else L = M + 1;
		}
		char x = c[L];
		L = 1, R = n;
		while (L < R)
		{
			int M = (L + R) >> 1;
			if (a[M] >= sum - i + 1) R = M;
			else L = M + 1;
		}
		char y = c[L];
		if (x != y) ans++;
	}
	cout << ans << '\n';
	return 0;
}

