#include <bits/stdc++.h>
using namespace std;

struct abc {
	int b;
	string c;
} a[200005];

int hui(string s) {
	int e = s.size();
	int mid = e / 2;
	if (e % 2 == 0) {
		for (int i = 0; i < mid; i++) {
			if (s[i] != s[mid + i]) {
				return 0;
				break;
			}
		}
	} else {
		for (int i = 0; i < mid; i++) {
			if (s[i] != s[mid + i + 1]) {
				return 0;
				break;
			}
		}
	}
	return 1;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, ans = 0, e, mid;
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].b >> a[i].c;
		for (int j = 1; j <= a[i].b; j++) {
			s = s + a[i].c;
		}
	}
	if (hui(s) == 1) {
		cout << 0;
		return 0;
	}
	e = s.size();
	mid = e / 2;
	while (hui(s) == 0) {
		if (e % 2 == 0) {
			for (int i = 0; i < mid; i++) {
				if (s[i] != s[mid + i]) {
					s[mid + i] = s[i];
					ans++;
				}
			}
		} else {
			for (int i = 0; i < mid; i++) {
				if (s[i] != s[mid + i + 1]) {
					s[mid + i + 1] = s[i];
					ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}//(¡«£þ¨Œ£þ)¡«