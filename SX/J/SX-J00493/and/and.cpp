#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n;
	cin >> n;
	int m;
	string a[n + 3] = {0}, s1;
	for (int i = 1; i <= n; i++) {
		cin >> m;
		s1 = "";
		while (m > 0) {

		}
		int p = 0;
		for (int j = s1.size() - 1; j >= 0; j--) {
			a[i][p] = s1[j];
			p++;
		}
		cout << a[i] << endl;
	}
	return 0;
}
