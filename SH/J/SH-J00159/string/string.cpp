#include <bits/stdc++.h>
using namespace std;
long long n,ans,l;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out", "w",stdout);
	long long a;
	string s = "";
	char c;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> c;
		for (int i = 1; i <= a; i++)
		{
			s += c;
		}
	}
	l = s.length();
	for (int i = 1; i <= l / 2; i++)
	{
		if (s[i - 1] != s[l - i])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
