#include <bits/stdc++.h>
using namespace std;
int m, n, a[200005], s, s1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - m + 1; i++) {
		s1 = a[i];
		for (int j = i + 1; j <= i + m - 1; j++) {
			s1 &= a[j];
		}
		s = max(s, s1);
		cout << endl;
	}
	cout << s;
	return 0;
}