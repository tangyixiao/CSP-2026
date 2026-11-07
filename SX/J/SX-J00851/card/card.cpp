#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int sum[300005];
int t[500005];
int tl;
map<int, int> p;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int q = 1; q <= n; q++) {
		tl = 0;
		p.clear();
		for (int i = q; i <= n; i++) {
			if (p[a[i]] == 0) {
				p[a[i]] = ++tl;
				t[tl] = a[i];
			} else {
				for (int j = tl; j > p[a[i]]; j--) {
					p[t[j]] = 0;
					tl--;
				}
			}
		}
		for (int i = 1; i <= tl; i++)
			sum[t[i]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << sum[i] << " ";
	return 0;
}
