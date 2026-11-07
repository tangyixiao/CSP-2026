#include <bits/stdc++.h>
using namespace std;
int n, a[200005] ;
long long sum, b;
char c[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		b += a[i];
	}
	b /= 2;
	int s = 0, i = 0, j = n - 1;
	while (n) {
		if (c[i] != c[j]) {
			if (a[i] > a[j]) {
				sum += a[j];
				s += a[j];
				a[i] -= a[j];
				j--;
			} else if (a[i] == a[j]) {
				sum += a[j];
				s += a[j];
				j--;
				i++;
			} else if (a[i] < a[j]) {
				sum += a[i];
				s += a[i];
				a[j] -= a[i];
				i++;
			}
		} else if (c[i] == c[j]) {
			if (a[i] > a[j]) {
				s += a[j];
				a[i] -= a[j];
				j--;
			} else if (a[i] == a[j]) {
				s += a[j];
				j--;
				i++;
			} else if (a[i] < a[j]) {
				s += a[i];
				a[j] -= a[i];
				i++;
			}
		}
		int minn = min(a[i], a[j]);
		if (s + minn >= b) {
			if (c[i] != c[j]) {
				sum += (b - s);
				cout << sum;
				return 0;
			} else {
				cout << sum;
				return 0;
			}

		}

	}
	return 0;
}
//6 1000000000 a 1000000000 a 1000000000 a 1000000000 b 1000000000 b 1000000000 b
//3 2 a 3 b 2 c