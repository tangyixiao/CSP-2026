#include <bits/stdc++.h>
using namespace std;
long long n, m, k;
int a[500010], v[500010], b[500010], c[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int l = 1; l <= n; l++) {
		memset(v, 0, sizeof(v));
		memset(c, 0, sizeof(c));
		k = l;
		for (int i = l; i <= n; i++) {
			if (v[a[i]] ) {
				if(c[a[i]]>=k)k = i;
				
				

			}
			v[a[i]] = 1;
			c[a[i]] = i;
		}
		for (int i = k; i <= n; i++) {
			b[a[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}


	return 0;
}
