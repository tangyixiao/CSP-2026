#include <bits/stdc++.h>
using namespace std;
int n, a[10005], c[10005], cnt1 = 0, cnt2 = 0, ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = n; i >= 1; i--) {
		cin >> a[i] >> c[i];
		cnt1 = a[i] * c[i];
		for (int j = a[i]; j >= 1; j--) {
			cnt2 = cnt1 % 10;
			cnt1 /= cnt1;
			for (int i = 1)
				if (cnt2 == ) {
					cout << 0;
				} else {

				}
		}
	}
	return 0;
}