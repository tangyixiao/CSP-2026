#include <bits/stdc++.h>;
using namespace std;

struct aaa {
	int x;
	char y;
} a[300200];

struct bbb {
	int x;
	char y;
} k;
long long m, n, sum ;
string s, ss;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		ss = "";
		int l;
		char r;
		cin >> l >> r;
		m += l;
		if (l >= 100) {
			for (int j = 1; j <= 100; j++)
				ss += r;
			for (int j = 1; j <= l / 100; j++)
				s += ss;
			for (int j = 1; j <= l % 100; j++)
				s += r;
		} else {

			for (int j = 1; j <= l; j++)
				s += r;
		}
	}
	for (int i = 1; i <= m / 2; i++)
		if (s[i] != s[n - i])
			sum++;

	cout << sum;
	return 0;
}

