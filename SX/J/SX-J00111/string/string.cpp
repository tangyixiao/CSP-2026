#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], s, step, summ;
char b[200005], sum[20005];
string c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < a[i]; j++) {
			c[s] = b[i];
			s++;
		}
	}
	if (n == 1)
		cout << 0;
	else if (n == 2) {
		if (b[1] == b[2]) {
			cout << 0;
			return 0;
		}

		if (a[1] < a[2]) {
			cout << a[1];
			return 0;
		}

		if (a[1] == a[2]) {
			cout << a[1];
			return 0;
		}

		if (a[1] > a[2]) {
			cout << a[2];
			return 0;
		}

	}

	return 0;
}
