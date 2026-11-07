#include <bits/stdc++.h>
using namespace std;
string s = "";
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int a[200010] = {};
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		char c;
		cin >> a[i] >> c;
		sum += 1LL * a[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c;
		}
	}
	long long cnt = 0;
	for (int i = 1; i <= sum / 2; i++) {
		if (s[i - 1] != s[sum - i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
