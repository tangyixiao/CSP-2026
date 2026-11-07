#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, minn = INT_MIN;
	cin >> n >> m;
	int a[n + 10];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int kd = 0, kp = 0;
	int p = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (i != j) {
				p = a[j] & a[i];
				kd = a[i];
				kp = a[j];
				if (minn < p) {
					minn = p;
				}
			}
		}
	}
	cout << p;
	return 0;
}
