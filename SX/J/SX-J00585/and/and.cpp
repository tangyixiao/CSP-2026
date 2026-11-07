#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	long long a[200050] = {0}, ans, sum;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < a[i + 1]) {
			swap(a[i], a[i + 1]);
		}
	}
	for (int i = 0; i < m; i++) {
		sum = a[i + 1] & a[i];
	}
	cout << sum ;
	return 0;
}
