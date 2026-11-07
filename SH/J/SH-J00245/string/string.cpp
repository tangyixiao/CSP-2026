#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string s;
	for (int i = 1; i <= n; i ++)
	{
		int m;
		cin >> m;
		char c;
		cin >> c;
		for (int j = 1;j <= m; j ++)
		{
			s += c;
		}
	}
	int l = 0, r = s.size() - 1;
	long long ans = 0;
	while (l < r)
	{
		if (s[l] != s[r])
		{
			ans ++;
		}
		l ++;
		r --;
	}
	cout << ans;
	return 0;
}
