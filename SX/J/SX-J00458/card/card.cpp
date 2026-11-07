#include <bits/stdc++.h>
using namespace std;
int a[500005];
int t[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		vector <int> v;
		for (int j = i; j <= n; j++) {
			int y = v.size();
			if (y != 0) {
				for (int k = 0; k < y; i++) {
					if (v[k] == a[j]) {
						for (int p = k; p < y; p++) {
							v[p] = -1;
						}
					}
				}
			}
			v.push_back(a[j]);
		}
		for (int j = 0; j < v.size(); j++) {
			if (v[i] != -1)
				t[v[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}