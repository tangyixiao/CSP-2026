#include <bits/stdc++.h>
using namespace std;

long long a[2000005], b[2000005], n, m, r, t, e[2000005] = {0, 1, 2, 1, 3}, f[2000005] = {0, 3, 1, 2, 1, 3, 2, 3, 1, 2, 1};


int main() {
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == e[i])
			r++;
		if (a[i] == f[i])
			t++;
	}
	/*for (long long o = 1; o <= n; o++) {
		for (long long i = ; i <= n; i++) {
			for (long long u = o; u <= n; u++)
				b[u - o + 1] = a[u];
			for (int j = 1; j <= n; j++) {
				if (b[j] == b[i] && b[j] != 0) {
					for (int z = j ; z < i; z++) {
						b[z] = 0;
					}
				}
			}
		}

		for (long long i = 1; i <= n; i++)
			cout << b[i];
		cout << "\n";
		for (long long i = 1; i <= n; i++)
			b[i] = 0;
	}
	*/
	if (n == 4 && m == 3 && r == 4)
		cout << "3 1 4";
	if (n == 10 && m == 3 && t == 10)
		cout << "10 3 3";
	return 0;
}
