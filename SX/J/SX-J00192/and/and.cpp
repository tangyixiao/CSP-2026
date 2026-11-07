#include <bits/stdc++.h>
using namespace std;
int l[100010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> l[i];
	}
	int p = 0;

	for (int i = 1; i < n; i++) {
		p = max(p, min(l[i], l[i + 1]));
	}

	cout << p;
}
