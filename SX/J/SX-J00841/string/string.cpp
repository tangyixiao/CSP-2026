#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, g, h;
string b;

struct T {
	int x;
	char y;
} a[100005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].y;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = g + 1; j <= g + a[i].x; j++) {
			b[j] = a[i].y;
		}
		g += a[i].x;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j++) {
			if (b[i] != b[j])
				h++;
		}
	}
	cout << h;
	return 0;
}
