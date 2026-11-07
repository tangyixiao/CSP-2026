#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		long long x;
		char ch;
		cin >> x >> ch;
		while (x--) s += ch;
	}
	long long l = 0, r = s.size() - 1, cnt = 0;
	while (l <= r)
	{
		if (s[l] != s[r]) cnt++;
		l++;
		r--;
	}
	cout << cnt;
	return 0;
}//暴力出奇迹,希望评测机quickly qwq