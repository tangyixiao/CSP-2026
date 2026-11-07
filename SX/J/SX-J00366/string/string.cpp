#include <bits/stdc++.h>
using namespace std;
int n, m, c, f[1000], s;
string a;
char b;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while (n--) {
		cin >> m >> b;
		f[b - '0'] = m;
		for (int i = 0; i < m; i++) {
			a += b;
		}
	}
	for (int i = 0; i < ((a.size() / 2 ) + 1);) {
		for (int j = a.size() - 1; j >= i;) {

			if (a[j] != a[i]) {
				if (f[a[i] - '0'] > f[a[j] - '0']) {
					a[j] = a[i];
					s++;
				} else {
					a[i] = a[j];
					s++;
				}
			}
			i++;
			j--;
		}
	}
	cout << s;
	return 0;
}
