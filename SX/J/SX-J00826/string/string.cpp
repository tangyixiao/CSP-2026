#include <bits/stdc++.h>
using namespace std;
int n, e, s[600];
char a, x[600];
string c, z;
int ans = 0;
bool f = true;
bool k = true;
set<char> se;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d%k", &e, &a);
		s[i] = e;
		x[i] = a;
		se.insert(a);
		for (int j = 1; j <= e; j++) {
			c += a;
		}
	}
	if (se.size() == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		z += x[i];
		s[i]--;
	}
	for (int i = 1; i <= n; i++) {
		if (s[i] != 0) {
			f = false;
			z[z.size() / 2] += x[i];
			s[i]--;
		}
	}

	for (int i = 1; i <= z.size() - 1; i++) {
		if (c[i] != z[i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
