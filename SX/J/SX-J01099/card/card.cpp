#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n, m, a;
	cin >> n >> m;
	int s[n], b[m];
	for (int i = 1; i <= n; i++) {
		cin >> a;

		for (int j = 1; j <= i; j++) {
			if (s[j] == a) {
				for (int k = j; k <= i; k++) {
					s[k] = 0;
				}
			}
		}
		s[i] = a;
		b[s[i]]++;
		cout << b[i] << ' ';
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] != 0) {
			cout << b[i] << ' ';
		}
	}
	return 0;
}
