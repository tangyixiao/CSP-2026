#include <bits/stdc++.h>
using namespace std;

int c[1000 + 5] = {0};
string op(int x) {
	int t = 0;
	long long b[10000];
	while (x > 0) {
		b[t] = x % 2;
		x /= 2;
		t++;
	}
	string c;
	for (int i = 0; i <= t - 1; i++) {
		c += b[i] + '0';
	}
	return c;
}
void qk(string a, string b) {
	int y = a.size();
	cout << a << " " << b;
	if (a.size() < b.size()) {

		a[y - 1] = '0';
	}

	for (int i = 0; i < y; i++) {
		if (a[i] != b[i])
			c[i] = 1;
		else
			c[i] = 0;
	}
}


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int p[m + 3] = {0};
	string s[100];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		s[i] = op(p[i]);
	}
	sort(p + 1, p + 1 + n);
	if (m == 1) {
		cout << p[n];
		return 0;
	}
	sort(s + 1, s + 1 + n);
	for (int i = 0; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int l = s[i].size(), r = s[j].size();
			cout << s[i] << " " << s[j];
			for (int k = 0; k <= r; k++)
				cout << c[k];
			cout << endl;
		}
	}
	return 0;

}
