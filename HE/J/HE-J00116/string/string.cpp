#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 1;
string s;
char ch[N];
ll ans, a[N], gcd;
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> ch[i];
		if (i == 1)
			gcd = a[i];
		else
			gcd = __gcd(gcd, a[i]);
	}
	for (int i = 1; i <= n; i ++)
		s.insert(s.size(), a[i] / gcd, ch[i]);
	int len = s.size();
	for (int i = 1; i <= len / 2; i ++)
		if (s[i - 1] != s[len - i])
			ans ++;
	cout << ans * gcd;
	return 0;
}

