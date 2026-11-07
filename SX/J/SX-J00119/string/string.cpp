#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
char x, z[2000000];
ll c, n, s, t, h;
ll b[2000000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> c >> x;
		b[i] = c;
		z[i] = x;
	}
	h = 1;
	t = n;
	while (h < t) {
		if (z[h] != z[t]) {
			if (b[h] > b[t]) {
				b[h] -= b[t];
				c += b[t];
				t--;
			} else if (b[h] < b[t]) {
				b[t] -= b[h];
				c += b[h];
				h++;
			} else {
				c += b[h];
				h++;
				t--;
			}
		} else {
			h++;
			t--;
		}
	}
	cout << c - b[n];
	return 0;
}
