#include <bits/stdc++.h>
using namespace std;
int str[200006];
string ch[200006];

string find(int n) {
	int x = 0;
	for (int i = 0; str[i] < n; i++) {
		x = i + 1;
	}
	return ch[x];
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m, x = 0, s = 0, cl = 0;
	string a, b, c, d, b0, d0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m >> a;
		s += m;
		str[i] = s;
		ch[i] = a;
	}

	for (int i = 0; i <= n / 2; i++) {
		if (find(i + 1) != find(s - 1 - i)) {
			cl++;
		}
	}
	cout << cl;
	return 0;
}
