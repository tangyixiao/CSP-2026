#include <bits/stdc++.h>
using namespace std;

struct nu {
	long long a;
	char z;
}
k[200000 + 5];
long long cnt, n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k[i].a >> k[i].z;
	}
	for (int i = 1; i <= n / 2; i++) {
		if (k[i].z == k[n - i + 1].z) {
			if (k[i].a > k[n - i + 1].a) {
				k[i].a -= k[n - i + 1].a;
				i--;
				n--;
			} else if (k[i].a < k[n - i + 1].a) {
				k[n - i + 1].a -= k[i].a;
				n++;
			}
		} else if (k[i].z != k[n - i + 1].z) {
			if (k[i].a > k[n - i + 1].a) {
				k[i].a -= k[n - i + 1].a;
				i--;
				n--;
				cnt += k[n - i + 1].a;
			} else if (k[i].a < k[n - i + 1].a) {
				k[n - i + 1].a -= k[i].a;
				n++;
				cnt += k[i].a;
			} else
				cnt += k[i].a;
		}
	}
	cout << cnt;
	return 0;
}
