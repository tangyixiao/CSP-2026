#include <bits/stdc++.h>
using namespace std;

int c[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string a, b;
	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> c[i];
		cin >> a[i];


	}

	int k = n - 1;
	for (int i = 0; i < n; i++) {

		b[k] = a[i];
		k--;

	}

	long long ans = 0;
	long long ans2 = 0;

	for (int i = 0; i < n / 2; i++) {

		if (a[i] != b[i]) {
			ans += c[i];


		}

	}
	for (int i = n / 2 - 1; i < n; i++) {

		if (a[i] != b[i]) {
			ans2 += c[i];

		}

	}
	cout << min(ans, ans2);
	return 0;
}
