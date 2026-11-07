#include <bits/stdc++.h>
using namespace std;
int n;
long long sum, ans;
string s;
int main () {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x; char c;
		cin >> x >> c;
		sum += x;
		for (int j = 1; j <= x; j++) s += c;
	}
	for (int i = 0; i < sum / 2; i++) {
		if (s[i] != s[sum - i - 1]) ans++;
	}
	cout << ans;
	return 0;
}