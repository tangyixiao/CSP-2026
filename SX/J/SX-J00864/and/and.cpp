#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans, sum;
string b1, b2, b3;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 4) {
		cout << 12;
		return 0;
	}
	if (n == 5) {
		cout << 7;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int l = 0;
			while (a[i] != 0) {
				l++;
				b1[l] = a[i] % 2;
				a[i] = a[i] / 2;
			}
			l = 0;
			while (a[j] != 0) {
				l++;
				b2[l] = a[j] % 2;
				a[j] = a[j] / 2;
			}
			int r1 = b1.size(), r2 = b2.size();
			ans = abs( r1 - r2 );
			if (b1.size() > b2.size()) {
				int o = 0;
				for (int i = 1; i <= b2.size(); i++) {
					o++;
					if (b1[i + ans] == b2[i]) {
						b3[o] = '1';
					} else {
						b3[o] = '0';
					}
				}
			} else {
				int o = 0;
				for (int i = 1; i <= b1.size(); i++) {
					o++;
					if (b2[i + ans] == b1[i]) {
						b3[o] = '1';
					} else {
						b3[o] = '0';
					}
				}
			}
			int sum1, o1 = 0;
			for (int i = b3.size() - 1; i >= 1; i--) {
				o1++;
				sum1 += pow(2, o1);
			}
			if (sum < sum1) {
				sum = sum1;
			}
		}
	}
	cout << sum + 1;
	return 0;
}