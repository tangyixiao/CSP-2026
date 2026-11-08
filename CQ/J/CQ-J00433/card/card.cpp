#include <bits/stdc++.h>

using namespace std;

int n, m, a[500005], b[500005], cnt = 0, c[500005], d[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
		for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(c, 0, sizeof(c));
		cnt = 0;
		for (int j = i; j <= n; j++) {
			if (c[a[j]] == 0) {
				b[++cnt] = a[j];
				c[a[j]]++;
			} else if (c[a[j]] >= 1) {
				cnt = 0;
				b[++cnt] = a[j];
				memset(c, 0, sizeof(c));
				c[a[j]]++;
			}
		}
//		for (int j = 1;  j <= cnt; j++) {
//			cout << b[j] << " ";
//			
//		}
//		cout << endl;
		for (int j = 1; j <= cnt; j++) {
			d[b[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << d[i] << " ";
	}
	
}

