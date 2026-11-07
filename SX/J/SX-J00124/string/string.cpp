#include <bits/stdc++.h>
using namespace std;
string a, b, c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long cnt = 0;

	for (int i = 1; i <= n; i++) {
		long long s;
		cin >> s >> c;
		cnt = cnt + s;
		for (int j = 1; j <= s; j++) {
			a += c;
		}
	}
	long long t = cnt / 2;
	int j = cnt - 1;
	cnt = 0;

	for (int i = 0; i < t; i++) {

		if (a[i] != a[j]) {
			cnt++;


		}
		j--;

	}

	cout << cnt;
	return 0;
}
