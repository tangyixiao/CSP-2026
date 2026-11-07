#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	long long n, sum = 0, num = 0;
	cin >> n;
	char a[n];
	string s, c;
	for (int i = 0; i < n; i++) {
		int k = 0;
		cin >> k;
		num += k;
		cin >> a[i];
		for (int j = 0; j < k; j++) {
			s += a[i];
		}
	}
	long long z = (num + 1) / 2;
	for (long long i = 0; i <= z; i++) {
		long long j = num - i - 1;
		if (s[j] != s[i]) {
			sum++;
			s[j] = s[i];
		}
	}
	cout << sum << endl;
	return 0;
}
