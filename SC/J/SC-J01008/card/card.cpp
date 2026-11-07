#include <bits/stdc++.h>

using namespace std;

const int N = 5 * 1e5, M = 3 * 1e5;
int n, m;
int a[N];
int ans[M];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
//	for (int i = 1; i <= n; i++) {
//		vector <int> g;
//		for (int ju = i; ju <= n; ju++) {
//			g.push_back(a[i]);
//			int ps1 = 0, ps2 = 0;
//			for (int j = 1; j <= g.size(); j++) {
//				for (int k = j + 1; k <= g.size(); k++) {
//					if (g[j] == g[k]) {
//						ps1 = j, ps2 = k;
//						break;
//					}
//				}
//			}
//			for (int j = ps1; j < ps2; j++) {
//				g[j] = 0;
//			}
//		}
//		for (int i = 1; i <= g.size(); i++) if (g[i] != 0) ans[g[i]]++;
//	}
	for (int i = 1; i <= m; i++) cout << i << ' ';
	return 0;
}