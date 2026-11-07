#include <bits/stdc++.h>
using namespace std;
long long a[200010];
string c[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long s = 0;
	int n;
	string m1, m2;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		m1 = m1 + c[i];
	}

	for (int i = n ; i >= 1; i--) {
		m2 = m2 + c[i];
	}
	for (int i = 0; i < n; i++) {
		if (m1 == m2) {
			cout << s;
			return 0;
		}
		if (m2[i] != m1[i]) {
			m2[i] = m1[i];
			m1[n - i - 1] = m2[i];
			s = s + a[i + 1];
		}
	}
	return 0;
}


