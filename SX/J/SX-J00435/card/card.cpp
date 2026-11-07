#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005];
vector<int>v;
int b[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = 0; k < v.size(); k++) {
				if (!v.empty() && v[k] == a[j]) {
					for (int q = k; q <= j; q++) {
						v.erase(v.begin() + k);
					}
				}
			}
			v.push_back(a[j]);
		}
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == i)
				b[i]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << b[i];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
