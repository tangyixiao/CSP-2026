#include <bits/stdc++.h>
using namespace std;
long long n, m;
int a[200010];
long long ma = LLONG_MIN;
long long sum;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (a[i] > ma) {
				ma = a[i];
			}
		}
		cout << ma;
		return 0;
	}
	if (m == n) {
		sum = a[1];
		for (int i = 2; i <= n; i++) {
			sum = sum &a[i];
		}
		cout << sum;
		return 0;
	}
	ma = LLONG_MIN;
//	cout << ma;
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if ((a[i]&a[j]) > ma) {
					ma = a[i] & a[j];
//					if (ma == 15) {
//						cout << i << j;
//					}
				}
			}
		}
		cout << ma;
		return 0;
	}
	return 0;
}//25
