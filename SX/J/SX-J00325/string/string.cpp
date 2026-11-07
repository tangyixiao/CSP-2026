#include <bits/stdc++.h>
using namespace std;
int a[100000005];
int n, sam;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	string s, l;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i] != 0) {
				l[i] = s[i];
				a[i]--;
			}
		}
	}
	if (n == 1) {
		cout << 0;
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			if (l[n - i] == l[i])
				sam += 0;
			else {
				sam++;
				l[i] = l[n - i];
			}
		}
	}
	cout << sam;
	return 0;
}
