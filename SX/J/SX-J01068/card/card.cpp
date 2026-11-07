#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
const int N = 1e6+10;
int h[N], ans[N], pu[N];
int hush[5010][5010];
int num[N];
int cou[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
		num[h[i]]++;
		hush[h[i]][num[h[i]]] = i;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= num[i]; j++) {
			//hush[i][j]
			pu[hush[i][j]] += (hush[i][j]), pu[hush[i][num[i]]] -= (hush[i][j]) ;
		}
	}
	for (int i = 1; i <= n; i++) {
		pu[i] = pu[i] + pu[i - 1];
		ans[i] = i - pu[i];
		cou[h[i]] += ans[i];
	}
	for (int i = 1; i <= n; i++)
		cout << pu[i] << ' ';
	cout << '\n';
	for (int i = 1; i <= m; i++) {
		cout << cou[i] << ' ';
	}
	return 0;
}
