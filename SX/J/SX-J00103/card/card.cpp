#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[500005], b[500005], t[300005];
ll vio[300005];
ll l;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= 300005; i++)
			vio[i] = 0;
		l = 0;
		for (int j = i; j <= n; j++) {
			if (vio[a[j]] != 0) {
				l = vio[a[j]] - 1;
			}
			b[++l] = a[j];
			vio[a[j]] = l ;
		}
		for (int j = 1; j <= l; j++) {
			t[b[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	return 0;
}
