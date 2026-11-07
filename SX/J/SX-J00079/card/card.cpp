#include <bits/stdc++.h>
using namespace std;
bool b[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, vi, vis, j;
	cin >> n >> m;
	vector<int> v, nv;
	int u[m + 1];
	v.push_back(0);
	for (int i = 0; i < n; i++) {
		cin >> vi;
		v.push_back(vi);
	} 
	vis = v.size();
	for (int i = 1; i <= n; i++) {
		for (j = i; vis != 0; j++) {
			while (b[v[j]] && nv[j] != v[j]) {
				nv.pop_back();
			}
			nv.push_back(v[j]);
			vis--;
			b[v[j]] = 1;
		}
		while (b[v[j]] && nv[j] != v[j]) {
			nv.pop_back();
		}
		for (int k = 1; k <= nv.size(); k++) {
			u[nv[k]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << u[i] << ' ';
	return 0;
}
