#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N];
char s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long ans = 0, f;
	f = 0;
	f = f + 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
	}
	int l = 1, r = n;
	while (l < r) {
		if (a[l] > a[r]) {
			if (s[l] != s[r]) {
				ans = ans + a[r];
			}
			a[l] = a[l] - a[r];
			r--;
		} else if (a[l] < a[r]) {
			if (s[l] != s[r]) {
				ans = ans + a[l];
			}
			a[r] = a[r] - a[l];
			l++;
		} else {
			if (s[l] != s[r]) {
				ans = ans + a[r];
			}
			r--;
			l++;
		}
	}
	cout << ans;
	return 0;
	return 0;
}
