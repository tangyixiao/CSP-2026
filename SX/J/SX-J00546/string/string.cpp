#include <bits/stdc++.h>
using namespace std;
long long s, n, cnt;
string a, s1;

int main() {
	freopen("string1.in", "r", stdin);
	freopen("string1.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> s >> s1;
		for (int i = 1; i <= s; i++) {
			a = a + s1;
		}
	}
	int l = a.size();
	int d = a.size() % 2;
	if (d == 1) {
		for (int i = 0; i <= n / 2 - 1 ; i++) {
			if (a[i] != a[n - i]) {
				cnt++;
			}
		}
	} else if (d == 0) {
		for (int i = 0; i <= l / 2; i++) {
			if (a[i] != a[n - i]) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
