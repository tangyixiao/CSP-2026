#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long ans = 0;
	long long a[200000];
	char c[200000];
	string ant = "";
	for (int i = 0; i < n; i ++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 0; i < n; i ++) {
		for (int j = a[i]; j > 0; j --) {
			ant += c[i];
		}
	}
	for (int i = 0; i < n / 2; i ++) {
		for (int j = n; j > n / 2; j --) {
			if (ant[i] != ant[j]) {
				ans ++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}