#include <bits/stdc++.h>
using namespace std;
string s, a;
long long n, k;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		cin >> a;
		for (int j = 0; j < k; j++) {
			s += a[0];
		}
	}
	long long sum = 0;
	long long l = s.size();
	for (int i = 0; i < l / 2; i++) {
		if (s[i] == s[l - i - 1]) {
			continue;
		} else {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
