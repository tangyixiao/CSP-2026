#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int a[100005];
string q;
char h[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> 	a[i] >> h[i];
		for (int j = 1; j <= a[i]; j++)
			q += h[i];
	}
	for (int i = 1; i <= n; i++) {
		if (q[i] == q[i + 1]) {
			cout << 0;
			return 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (abs(q[i] - q[i + 1]) != 0)
			cnt++;
	}
	cout << cnt;
	return 0;
}
