#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	int a;
	for (int i = 0; i < n; i++) {
		a = i;
		cin >> a;
	}
	if (a % 2 == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}
