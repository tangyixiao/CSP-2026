#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
int a[N + 10], l, r, n, x;
char w[N + 10];
long long summ;

int main() {
//第二题回文
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> w[i];
	}
	for (l = 1, r = n; r > l;) {
		if (w[l] == w[r]) {
			if (a[l] > a[r]) {
				a[l] = a[l] - a[r];
				a[r] = 0;
				r--;
			} else if (a[l] == a[r]) {
				a[r] = 0;
				a[l] = 0;
				r--;
				l++;
			} else {
				a[r] = a[r] - a[l];
				a[l] = 0;
				l++;
			}
		} else {
			if (a[l] > a[r]) {
				summ += a[r];
				a[l] = a[l] - a[r];
				a[r] = 0;
				r--;
			} else if (a[l] == a[r]) {
				summ += a[r];
				a[r] = 0;
				a[l] = 0;
				r--;
				l++;
			} else {
				summ += a[l];
				a[r] = a[r] - a[l];
				a[l] = 0;
				l++;
			}
		}
		if (r <= l) {
			break;
		}
	}
	cout << summ;
	return 0;
}