#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll xx[200005];
char aa[200005];
ll sti(string s)
{
	ll ans = 0;
	for (int i = 0; i <= s.size() - 1; ++i)
	{
		ans = ans * 10 + int(s[i] - '0');
	}
	return ans;
}
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ll n;
	cin >> n;
	string s;
	for (int i = 1; i <= n; ++i)
	{
		cin >> xx[i] >> aa[i];
	}
	ll ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= xx[i]; ++j)
		{
			s += aa[i];
		}
	}
	for (int i = 0; i < (s.size() / 2 - 1); ++i)
	{
		if (s[i] != s[s.size() - i - 1]) ans++;
	}
	cout << ans;
	return 0;
}
