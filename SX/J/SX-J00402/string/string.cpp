#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 2 * 1e5;
int n, l = 1, r = 1, ans;
char a[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1, x; i <= n; i++) {
		cin >> x;
		char A;
		cin >> A;
		r += x;
		for (int j = r; j <= r; j++) {
			a[r] = A;
		}
	}
	//for (int i = 1; i <= r; i++) {
	//	cout << a[r];
	//}
	if (r % 2 == 0) {
		while (l <= r) {
			if (a[l] != a[r]) {
				ans++;
			}
			l++, r--;
		}
	} else {
		while (l < r) {
			if (a[l] != a[r]) {
				ans++;
			}
			l++, r--;
		}
	}
	cout << ans;
	return 0;
}
/*
aabbccbbaa
aabbccbbaa
*/
