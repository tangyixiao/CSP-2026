#include <bits/stdc++.h>

using namespace std;

int n, a[200005];
char c[2000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	} 
	long long sum = 0LL, l = 0, r = 0;
	char c1 = c[1], c2 = c[n];
	int i = 1, j = n;
	while (i <= j) {
		c1 = c[i], c2 = c[j];
//		cout << a[i] << " " << a[j] << endl;
		int cnt = min(a[i], a[j]);
			if (a[i] != a[j] && cnt == a[j]) {
				r = a[i] - a[j];	
				c2 = c[i];
				if (c[i] != c[j]) {
					sum += a[j] * 1LL;
//					cout << a[j] << endl;
				} 
			} else if (a[i] != a[j] && cnt == a[i]) {
				l = a[j] - a[i];
				c1 = c[j];
				if (c[i] != c[j]) {
					sum += a[i] * 1LL;
//					cout << a[j] << endl;
				}
			} else if (a[i] == a[j]) {
				if (c[i] != c[j]) {
					sum += a[i] * 1LL;
//					cout << a[i] << endl;
				}
			}
//		cout << r << endl;
		if (r != 0) {
			for (int k = j - 1; k >= i; k--) {
				if (a[k] - r <= 0) {
					if (c[k] != c[i]) {
						sum += a[k] * 1LL;
					} 
					a[k] = 0;
					r -= a[k];
				} else {
					if (c[k] != c[i]) {
						sum += r * 1LL;
					}
					r = 0;
					a[k] = a[k] - r;
					j = k;
					break;
				}
			}
			r = 0;
			i++;
		} else if (l != 0) {
			for (int k = i + 1; k <= j; k++) {
				if (a[k] - l <= 0) {
					if (c[k] != c[j]) {
						sum += a[k] * 1LL;
					} 
					a[k] = 0;
					l -= a[k];
				} else {
					if (c[k] != c[j]) {
						sum += l * 1LL;
					}
					l = 0;
					a[k] = a[k] - l;
					i = k;
					break;
				}
			}
			l = 0;
			j--;
		} else {
			i++, j--;
		}
	}
	
	cout << sum;
}

