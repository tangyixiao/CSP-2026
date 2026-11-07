#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	long Map[200005] = {0};
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> Map[i];
	long temp;
	bool k;
	for (int i = 0; i < n; i++) {
		k = true;
		for (int j = 0; j < n - i - 1; j++) {
			if (Map[j] < Map[j + 1]) {
				temp = Map[j];
				Map[j] = Map[j + 1];
				Map[j + 1] = temp;
				k = false;
			}
		}
		if (k)
			break;
	}

	cout << Map[m - 1];
	return 0;
}
