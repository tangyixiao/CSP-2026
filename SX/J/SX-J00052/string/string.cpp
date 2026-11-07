#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
char b[200001];

long long sum = 0, a[200001] = {0};

int n, l = 0, r = 0, s = 1;
int main() {
	freopen("string6.in", "r", stdin);
	freopen("string6.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> b[i];
	}
	l = 1;
	r = n;
	for (int i = 1; i <= n; i++) {
		if (l >= r) {
			break;
		}
		if (b[l] == b[r]) {
			if (a[l] == a[r]) {
				l++;
				r--;
			} else if (a[l] > a[r]) {
				a[l] -= a[r];
				r--;
			} else {
				a[r] -= a[l];
				l++;
			}
		} else {
			if (a[l] == a[r]) {
				sum += a[r];
				l++;
				r--;
			} else if (a[l] > a[r]) {
				sum += a[r];
				a[l] -= a[r];
				r--;
			} else {
				sum += a[l];
				a[r] -= a[l];
				l++;
			}
		}
	}
	cout << sum;
	return 0;
}
