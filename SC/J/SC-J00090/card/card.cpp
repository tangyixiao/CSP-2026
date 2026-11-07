#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m, a[50005], b[30005], c[50005];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			c[j] = a[j];
			for (int k = i; k < j; k++) {
				if (c[k] == c[j] ) {
					for (int d = k; d < j; d++) {
						c[d] = 0;
					}
				}
			}
		}
		for (int j = i; j <= n; j++) {
			b[c[j]]++;
		}
		for(int j=1;j<=n;j++){
			c[j]=0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}