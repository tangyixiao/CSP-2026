#include <bits/stdc++.h>
using namespace std;
int a[500005];
int id[300005];
int num[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= m; j++)
			id[i] = -1;
		for (int j = i; j < n; j++) {
			if (id[a[j]] >= 0) {
				for (int k = id[a[j]]; k < j; k++)
					id[a[k]] = -1;
			}
			id[a[j]] = j;
		}
		for (int j = 1; j <= m; j++) {
			if (id[j] >= 0)
				num[j]++;
		}

	}
	for (int i = 1; i <= m; i++)
		cout << num[i] << " ";
}