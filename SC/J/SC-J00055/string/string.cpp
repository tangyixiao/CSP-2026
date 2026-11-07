#include <bits/stdc++.h>
using namespace std;

int a[200005];
char c[200005];

bool ishw (string s)
{
	int i = 1;
	while (i < s.size () / 2 + 1)
	{
		if (s[i] != s[s.size () - i])
		{
			return 0;
		}
		i = i + 1;
	}
	return 1;
}

void solve ()
{
	int n;
	cin >> n;
	int i = 0;
	string s = "1";
	while (i < n)
	{
		cin >> a[i];
		cin >> c[i];
		int j = 0;
		while (j < a[i])
		{
			s = s + c[i];
			j = j + 1;
		}
		i = i + 1;
	}
	if (ishw (s) == 1)
	{
		cout << 0;
		return;
	}
	i = 1;
	int ans = 0;
	while (i < s.size () / 2 + 1)
	{
		if (s[i] != s[s.size () - i])
		{
			ans = ans + 1;
		}
		i = i + 1;
	}
	cout << ans;
	return;
}

int main ()
{
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	solve ();
	fclose (stdin);
	fclose (stdout);
	return 0;
}