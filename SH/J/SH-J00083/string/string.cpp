#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	string s = "";
	for(int i = 1; i <= n; i++)
	{
		long long a;
		char c;
		cin >> a >> c;
		for(int i = 1; i <= a; i++) s += c;
	}
	long long len = s.size();
	string c = "";
	for(int i = len - 1; i >= len / 2; i--) c += s[i];
	long long ans = 0;
	for(int i = 0; i < len / 2; i++)
	{
		if(c[i] != s[i]) ans++;
	}
	cout << ans;
	return 0;
}
