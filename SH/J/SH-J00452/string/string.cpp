#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, cnt = 0;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		long long x;
		char c;
		cin >> x >> c;
		for (int i = 0; i < x; i++) s += c;
	}
	for (int i = 0; i < s.size()/2; i++)
		if (s[i] != s[s.size()-i-1]) cnt++;
	cout << cnt;
	return 0;
}
