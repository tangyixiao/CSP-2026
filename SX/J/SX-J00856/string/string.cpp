#include <bits/stdc++.h>
using namespace std;
int n, a[200010], ans;
char c[200010];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		while (a[i]--) {
			s += c[i];
		}
	}
	int j = n;
	for (int i = 1; i <= n; i++) {
		if (s[i] != s[j]) {
			ans++;
		}
		j--;
	}
	cout << ans << endl;
	return 0;
}