#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 2e5 + 10, maxLen = 1e6 + 10;
ll n, len, cnt, tot, a[maxN];
char c[maxN], s[maxLen];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout); 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		tot += a[i];
		for (int j = 1; j <= a[i]; j++) s[++len] = c[i];
	}
	// cout << ceil(tot * 1.0 / 2) << '\n';
	for (int i = 1; i <= n; i++) {
		if (s[i] == s[tot - i + 1]) {
			// cout << "match " << i << " " << tot - i + 1 << '\n';
			cnt++;
		}
	}
	cout << (tot - cnt) / 2;
	return 0;
}
