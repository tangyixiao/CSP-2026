#include <bits/stdc++.h>
using namespace std;
long long n, m;
const long long N = 30000000;
int a[N], b[N];

int aw(int x, int y) {
	int ans = 0;
	string s1 = "";
	string s2 = "";
	while (x > 0) {

		s1 += x % 2;
		x /= 2;
	}
	while (y > 0) {

		s2 += y % 2;
		y /= 2;
	}
	int l = min(s1.size(), s2.size());
	for (int i = 0; i < l; i++) {
		if (s1[i] == s2[i])
			ans += pow(2, i);
	}
	return ans;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			b[i * j] = aw(a[i], a[j]);
		}
	}
	sort(b, b + (n * (n - 1) ) / 2);

	cout << b[n * (n - 1)  / 2 - 1];
	return 0;
}
