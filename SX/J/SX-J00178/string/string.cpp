#include <bits/stdc++.h>
using namespace std;
long long n, ans;

struct z {
	char a;
	long long x;
} b[200006];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i].x >> b[i].a;
	}
	long long hd = 1, tl = n;
	while (hd < tl) {
		if (b[hd].x > b[tl].x) {
			if (b[tl].a != b[hd].a) {
				ans += b[tl].x;
			}
			b[hd].x -= b[tl].x;
			b[tl].x = 0;
			tl--;
		} else {
			if (b[tl].a != b[hd].a) {
				ans += b[hd].x;
			}
			b[tl].x -= b[hd].x;
			b[hd].x = 0;
			hd++;
		}
	}
	cout << ans;
	return 0;
}
