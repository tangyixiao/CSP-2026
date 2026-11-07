#include <bits/stdc++.h>
using namespace std;
#define N 300010
#define endl '\n'
#define int long long
int n, m, a[N], a1[N], a2[N];
vector<int>v;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			int k = a[j];
			v.push_back(k);
			if (a1[k] == 1) {
				while (v[v.size() - 1] != k) {
					a1[v[v.size() - 1]] = 0;
					v.pop_back();
				}
			} else {
				a1[k] = 1;
			}
		}
		for (int j = 1; j <= m ; j++) {
			a1[j] = 0;
		}
		for (int j = 0; j < v.size(); j++) {
			int c = v[v.size() - 1];
			a2[c]++;
			v.pop_back();
		}
	}
	cout << a2[1];
	for (int i = 2; i <= m; i++) {
		cout << "¡¡" << a2[i];
	}
	return 0;
}