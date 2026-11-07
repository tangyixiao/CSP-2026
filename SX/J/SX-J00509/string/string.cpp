#include <bits/stdc++.h>
using namespace std;
long long n, cnt, a[200005];
string c[200005], bin;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];

		for (int j = 1; j <= a[i]; j++) {
			bin += c[i];
		}
	}

	int l = 0;
	long long r = bin.length();

	for (int i = 0; i < r; i++) {
		if (bin[l] != bin[r - 1]) {
			cnt++;
		}
		l++;
		r--;
	}
	cout << cnt;
	return 0;

}