#include<bits/stdc++.h>
using namespace std;
int n, a;
char c;
string s;
inline int huiwen(string s)
{
	int ans = 0;
	for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
	{
		if (s[i] != s[j])
			ans++;
	}
	return ans / 2;
}
int32_t main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n <= 1)
	{
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> c;
		for (int j = 1; j <= a; j++)
			s += c;
	}
	cout << huiwen(s);
	return 0;
}
