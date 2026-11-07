#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a[N];

int maxn[N] = {0};

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n = 0, m = 0, num = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	maxn[0] = a[0];
	if (a[1] > maxn[0]) {
		maxn[0] = a[1];
	} else {
		maxn[1] = a[1];
	}
	if (a[2] > maxn[1]) {
		maxn[1] = a[2];
	} else {
		maxn[2] = a[2];
	}

	for (int i = 3; i < n; i++) {
		for (int s = 0; s < m; s++) {
			if (a[i] > maxn[s]) {
				maxn[s] = a[i];
				break;
			}
		}
	}

	num = maxn[0];
	for (int i = 0; i < m - 1; i++) {
		num = num &maxn[i + 1];
	}
	cout << num;

	return 0;
}
