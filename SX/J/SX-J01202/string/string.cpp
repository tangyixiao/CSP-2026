#include <bits/stdc++.h>
using namespace std;

struct u {
	int b;
	char k;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int w;
	cin >> w;
	long long k = 0;
	for (int i = 1; i <= w; i++) {
		cin >> a[i].b >> a[i].k ;
		k += a[i].b ;
	}
	long long n = k / 2;
	int cnt = 1;
	for (int i = w; i >= k / 2; i--) {
		if (a[cnt].k == a[i].k ) {
			n -= a[cnt].b;
			cnt++;
		}
	}
	cout << n;
	return 0;
}
