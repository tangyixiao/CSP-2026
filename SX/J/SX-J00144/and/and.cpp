#include <bits/stdc++.h>
using namespace std;
long long q[1000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long a, b;
	cin >> a >> b;
	for (long long i = 1; i <= a; i++) {
		cin >> q[i];
	}
	sort(q + 1, q + 1 + a);
	cout << q[a - b + 1];
	return 0;
}