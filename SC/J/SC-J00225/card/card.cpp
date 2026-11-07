#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[500010];
int ans[300010];
int last_i[300010];
int next_x[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i <= n + 5; ++i) next_x[i] = n + 1;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (last_i[a[i]] != 0) next_x[last_i[a[i]]] = i;
		last_i[a[i]] = i;
	}

//	for (int i = 1; i <= n; ++i) cout << next_x[i] << " ";
//	cout << endl;

//	for (int i = 1; i <= n; ++i) {
//		int l = i;
//		while (l <= n) {
//			if (next_x[l] == n + 1) ans[a[l]]++;
//			else if (next_x[l] != n + 1) l = next_x[l] - 1;
//			l++;
//		}
//	}

	int now = 1;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>f;
	for (int i = 1; i <= n; ++i) {
		while (!f.empty() && f.top().first == i) now += f.top().second, f.pop();

		if (next_x[i] != n + 1) f.push({next_x[i], now}), now = 0;
		else ans[a[i]] += now;
//		cout << now << endl;
		now++;
	}


	for (int i = 1; i <= m; ++i) cout << ans[i] << " ";


	return 0;
}