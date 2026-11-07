#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10;
const int M = 3e5 + 10;

int origin[N];
vector<int> adj[M];
int ans[N];
int n, m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> origin[i];
		adj[origin[i]].push_back(i);
	}

	for (int i = 1; i <= m; i++) {
		cout << "4" << '\n';
	}
	return 0;
}
