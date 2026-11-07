#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n;
	cin >> n;
	int m;
	cin >> m;
	int a;
	for (int i = 1; i <= n; i++) {
		cin >> a;
	}
	cout << m / a;
	return 0;
}
//Trick||Treat!