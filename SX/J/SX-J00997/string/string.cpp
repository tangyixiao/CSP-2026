#include <bits/stdc++.h>
using namespace std;
const int Q = 2e5+5;
long long n, w[Q], l, ans;
char c;
bool h = 1;
string s;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		cin >> w[i] >> c;
		if (c != s[i - 1] && i > 1)
		{
			h = 0;
		}
		for (long long j = 1; j <= w[i]; j++)
		{
			s += c;
		}
	}
	if (h)
	{
		cout << 0;
		return 0;
	}
	l = s.size();
	n = l / 2;
	for (long long i = 0; i < n; i++)
	{
		if (s[i] != s[l - i - 1 ])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
