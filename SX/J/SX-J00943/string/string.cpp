#include <bits/stdc++.h>
using namespace std;
int zsz[1000];

int main() {
    freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, nz = 0;
	cin >> n;
	long long sz[n + 10];
	char zm[n + 10];

	for (int i = 1; i <= n; i++) {
		cin >> sz[i] >> zm[i];
		for (int j = 1 + nz; j <= sz[i]; j++) {
			zsz[j] = zm[i];
		}
		nz = nz + sz[i];
	}

	int o = 0;
	for (int i = 1; i <= nz / 2; i++) {
		if (zsz[i] != zsz[nz - i + 1])
			o++;
	}
	cout << o;













	return 0;
}
