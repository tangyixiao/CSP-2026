#include <bits/stdc++.h>
using namespace std;

struct xxx {
	long long b;
	string a;
};
xxx h[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, sum = 0;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> h[i].b;
		cin >> h[i].a;
	}
	long long l = 0, r = n - 1;
	while (l <= r) {
		if (h[l].a != h[r].a) {
			if (h[l].b < h[r].b) {
				h[r].b -= h[l].b;
				sum += h[l].b;
				l++;
			} else if (h[l].b > h[r].b) {
				h[l].b -= h[r].b;
				sum += h[r].b;
				r--;
			} else {
				sum += h[l].b;
				l++;
				r--;
			}
		} else if (h[l].b != h[r].b) {
			if (h[l].b < h[r].b) {
				h[r].b -= h[l].b;
				l++;
			} else if (h[l].b > h[r].b) {
				h[l].b -= h[r].b;
				r--;
			}
		} else {
			l++;
			r--;
		}
	}
	cout << sum;
}
