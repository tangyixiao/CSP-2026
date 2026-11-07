#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
int c[N], v1[N], vi[N], vb[N];
long long s = 0, n, m, ki;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		ki = 1;
		memset(vi, 0, sizeof(vi));
		memset(v1, 0, sizeof(v1));
		for (int k = i; k <= n; k++) {
			if (vi[c[k]]) {
				int a = 0;
				for (int il = 1; il <= ki - 1; il++) {
					if (v1[il] == c[k]) {
						a = il;
						break;
					}
				}
				for (int ik = a + 1; ik <= ki - 1; ik++) {
					vi[v1[ik]] = 0;
					v1[ik] = 0;
				}
				ki = a + 1;
			} else {
				v1[ki] = c[k];
				ki++;
				vi[c[k]] = 1;
			}
		}
		for (int i1 = 1; i1 <= ki - 1; i1++) {
			vb[v1[i1]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << vb[i] << " ";
	}
	return 0;
}
