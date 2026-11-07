#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("card.in", "r", stdin );
	freopen("card.out", "w", stdout);
	int a, b, ccc = 1;
	cin >> a >> b;
	int aa[a + 10], bb[b + 10], cc[a + 100000];
	for (int i = 1; i <= a; i++) {
		cin >> aa[i];
	}
	for (int i = 1; i <= a; i++) {
		for (int j = i; j <= a; j++) {
			for (int z = j; z >= 1; z--) {
				if (cc[z] == j) {
					for (int x = z; x <= ccc; x++) {
						cc[x] = 0;
					}
					break;
				}
			}
			cc[ccc] = aa[j];
			ccc++;
		}
		for (int v = 1; v <= b; v++) {
			for (int n = 1; n <= ccc; n++) {
				if (cc[n] == v) {
					bb[v]++;
				}
			}
			ccc = 1;
		}
		for (int i = 1; i <= b; i++) {
			cout << bb[b] << " ";
		}
	}
	return 0;

}
