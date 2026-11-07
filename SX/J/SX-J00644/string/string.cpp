#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long x;
	string a = "0";
	string s;
	for (long long i = 0; i < n; i++) {
		cin >> x >> s[i];
		for (long long j = 1; j <= x; j++) {
			a += s[i];
		}
	}
	long long  left = 1, right = a.length();
	long long ans = 0;
	while (left < right) {
		if (a[left] != a[right]) {
			ans++;
		}
		left++;
		right--;
	}
	cout << ans;
	return 0;
}
