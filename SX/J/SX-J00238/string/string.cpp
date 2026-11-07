#include <bits/stdc++.h>
using namespace std;
int n;
int ct = 0;
int a[10000005], b[10000005], c[10000005], sum = 0, s;
char m;

int main() {
	//freopen ("string.in", "r", stdin);
	//freopen ("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s >> m;
		for (int j = sum; j <= sum + s; j++) {
			a[j] = m;
		}
		sum += s;

	}
	if (sum % 2 != 0) {
		for (int i = 1; i <= (sum - 1) / 2; i++) {
			b[i] = a[i];
		}
		for (int i = sum; i >= (sum - 1) / 2; i--) {
			for (int j = 1; j <= (sum - 1) / 2; j++) {
				c[j] = a[i];
			}
		}
		for (int i = 1; i <= (sum - 1) / 2; i++) {
			if (b[i] != c[i]) {
				ct++;
			}
		}
		if (ct > 0) {
			cout << ct + 1;
		} else {
			cout << ct;
		}
	} else {
		for (int i = 1; i <= sum / 2; i++) {
			b[i] = a[i];
		}
		for (int i = sum; i >= sum / 2; i--) {
			for (int j = 1; j <= sum / 2; j++) {
				c[j] = a[i];
			}
		}
		for (int i = 1; i <= sum / 2; i++) {
			if (b[i] != c[i]) {
				ct++;
			}
		}
		if (ct > 0) {
			cout << ct + 1;
		} else {
			cout << ct;
		}
	}
	return 0;
}
