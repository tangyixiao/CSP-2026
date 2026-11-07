#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	int a, l = 0;
	string s = "", c;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> c;
		for (int j = 1; j <= a; j++)
		{
			s += c;
		}
		l += a;
	}
	bool flag = true;
	for (int i = 1; i <= l; i++)
	{
		if (s[i] != s[l + 1 - i])
		{
			flag = false;
		}
	}
	if (flag == 0) cout << 0;
	return 0;
}
