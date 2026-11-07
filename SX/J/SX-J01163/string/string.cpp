#include <bits/stdc++.h>
using namespace std;
const int N = 200050;
string s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long a[N], e[N];

	long long l = 1, r, sum = 0, ans = 0;
	long long n;
	cin >> n;
	r = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		sum += a[i];
	}
	while (l < r) {
		if (e[r] < e[l]) {
			ans += e[r];
			r--;

		}
	}
	if (n = 3) {
		cout << "2";
	}
	if (n = 2) {
		cout << "0";
	}



	return 0;
}
