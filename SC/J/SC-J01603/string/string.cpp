#include <bits/stdc++.h>
using namespace std;
int n, ans;
string s = "";
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1, a; i <= n; i++) {
		char c;
		cin >> a >> c;
		for(int i = 1; i <= a; i++)
			s += c;
	}
	long long len = s.size();
	for(long long i = 1; i <= len / 2; i++)
		if(s[i] != s[len - i - 1]) ans++;
	cout << ans << '\n';
	return 0;
}