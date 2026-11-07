#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10, M = 3e5+10;
long long n, m, a[N], b[N], v[M], v1[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++) {
		memset(v, 0, sizeof(v));
		for (int j = i; j <= n; j++) {
			if (v[a[j]]) {
				for (int k = b[v[j]]; k <= j ; k++)
					v[k] = 0;
			}
			v[a[j]] = 1;
			b[v[a[j]]] = j;;
		}
		for (int j = 1; j <= m; j++) {
			if (v[j])
				v1[j]++;
		}
	}
	v1[a[n]]++;
	for (int i = 1; i <= m; i++)
		cout << v1[i] << " ";
	return 0;
}
