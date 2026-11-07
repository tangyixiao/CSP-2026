#include <bits/stdc++.h>
using namespace std;
int t;
long long n;
string s, m1, m2;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long a;
		char b;
		cin >> a >> b;
		for (int j = 1; j <= a; j++) {
			t++;
			s[t] = b;
		}
	}
	int r = t / 2;
	if (t % 2 == 1) {
		for (int i = 1; i <= r; i++) {
			m1[i] = s[i];
			m2[i] = s[i + r + 1];
		}
	} else {
		for (int i = 1; i <= r; i++) {
			m1[i] = s[i];
			m2[i] = s[i + r];
		}
	}
	int cnt = 0;
	for (int i = 1; i <= r; i++) {
		if (m1[i] != m2[i]) {
			cnt++;
			cout << m1[i] << " " << m2[i] << endl;
		} else
			continue;

	}
	cout << cnt;

	return 0;
}
