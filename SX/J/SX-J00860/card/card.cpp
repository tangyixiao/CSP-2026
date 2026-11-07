#include <bits/stdc++.h>
using namespace std;
int b[100010], a[100010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	//memset(b,-1,sizeof(b));
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int c[100010] = {0};
		int k = i;
		for (int j = i; j <= n; j++) {
			if (c[a[j]] != 0) {
				k = j ;
				//cout << k;
				c[a[j]] = 0;
			}
			c[a[j]]++;
		}
		for (int j = k; j <= n; j++) {
			b[a[j]]++;
			cout << a[j] << " ";
		}
		cout << endl;
		//cout << k << " ";
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";

	}
	return 0;
}
