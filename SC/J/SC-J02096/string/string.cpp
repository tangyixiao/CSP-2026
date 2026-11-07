#include <bits/stdc++.h>
using namespace std;
int n, l;
long long cnt;
string a, b;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> l >> b;
		for (int j = 1; j <= l; j++) {
			a += b;
		}
	}
	int op = a.size();
	for (int i = 0; i < op/2; i++) {
		if (a[i] == a[op-1-i]) continue;
		a[i] = a[op-1-i];
		cnt++;
	}
	cout << cnt;
	return 0;
}