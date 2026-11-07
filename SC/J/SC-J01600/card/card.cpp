#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int n, a[N], m, b[N], c[N], d[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	if(n <= 500 and m <= 200) {
		for(int i = 1; i <= n; ++i) {
			int k = 1;
			memset(b, 0, sizeof(b));
			memset(c, 0, sizeof(c));
			for(int j = i; j <= n; ++j) {
				if(b[a[j]] == 0) {
					b[a[j]] = k;
					c[k] = a[j];
				}
				else {
					for(int l = b[a[j]] + 1; l < k; ++l) {
						b[c[l]] = 0;
						c[l] = 0;
					}
					k = b[a[j]];
				}
				k++;
			}
			k--;
			for(int j = 1; j <= k; ++j) {
				d[c[j]]++;
			}
		}
		for(int i = 1; i <= m; ++i) {
			cout << d[i] << ' ';
		}
	}
	else {
		int t = a[1];
		for(int i = 1; i <= n; ++i) {
			if(a[i] != t) {
				cout << i-1 << ' ';
				t = a[i];
			}
		}
		cout << n;
	}
	return 0;
}