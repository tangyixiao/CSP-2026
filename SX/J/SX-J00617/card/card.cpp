#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int s = rand();
		cout << s << ' ';
	}
	cout << endl;
	return 0;
}
