#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], s, l, r, s1;
char c[200010], x[200010];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (i == 1) {
			for (int j = 1; j <= a[i]; j++) {
				x[j] = a[i];
			}
		} else {
			for (int j = a[i] + 1; j <= a[i]; j++) {
				x[j] = a[i];
				s = j;
				cout << x[j];
			}
		}
	}
	l = 0;
	r = s - 1;
	for (int i = 1; i <= s % 2 + 1; i++) {
		if (x[l] == x[r]) {
			l++;
			r--;
		} else {
			s1++;
		}
	}
	cout << s1;
	return 0;
}
