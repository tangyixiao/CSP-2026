#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	int m, n;
	cin >> m >> n;
	int a[m] = {}, b[m] = {};
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	int cut = 0;
	while (m) {
		for (int i = cut; i < n; i++) {
			for (int j = 0; j <= m; j++) {
				if (b[j] == a[i]) {
					for (int y = j; y < b.size() - j; y++) {
						b[y] = 0;
					}
					b[j] = a[i];
				}
			}
			if (b == b1)
			}
		m--;
		cut++;
	}
}