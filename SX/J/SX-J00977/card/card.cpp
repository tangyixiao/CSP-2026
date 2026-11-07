#include <bits/stdc++.h>
using namespace std;
long long nn, m, n[300010], t[300010], q;

int main() {
//	freopen("card.in", "r", stdin);
//	freopen("card.out", "w", stdout);
	cin >> nn >> m;
	for (int i = 1; i <= nn; i++)
		cin >> n[i];



	for (int i = 1; i <= m; i++) {
		
		for (int j = i; j <= nn; j++) {
			for (int z = 1; z <= nn; z++) {
				if (t[z] == n[j]) {
					q = z;
				}
			}
			q++;
			t[q] = n[j];

		}
		cout << q << " ";
	}
	return 0;
}
