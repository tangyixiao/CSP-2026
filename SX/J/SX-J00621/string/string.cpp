#include <bits/stdc++.h>
using namespace std;
int n, a[100005], b[100005];
char a1[100005], b1[100005];
long long m;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> a1[i];
		b[i] = a[i];
		b1[i] = a1[i];
	}
	int i = 1, l = n;
	while (i != l) {
		if (a[i] >= b[l] && a1[i] != b1[l]) {
			a[i] -= b[l];
			m += b[l];
			l--;
		}
		if (a[i] >= b[l] && a1[i] == b1[l]) {
			a[i] -= b[l];
			l--;
		}
		if (a[i] <= b[l] && a1[i] != b1[l]) {
			b[l] -= a[i];
			m += a[i];
			i++;
		}
		if (a[i] <= b[l] && a1[i] == b1[l]) {
			b[l] -= a[i];
			i++;
		}
	}
	cout << m;
	return 0;
}