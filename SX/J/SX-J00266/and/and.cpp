#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	long long w[a + 10], n[b + 10], m[b + 10];
	for (int i = 0; i < a; i++) {
		cin >> w[i];
	}
	cout << w[a];
	return 0;
}