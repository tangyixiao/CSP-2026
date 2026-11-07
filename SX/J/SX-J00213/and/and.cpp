#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int k;
	int max = 0;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		if (m == 1) {

			if (max < k) {
				max = k;
			}

		}

	}
	cout << max;


	return 0;
}