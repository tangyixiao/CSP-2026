#include <bits/stdc++.h>
using namespace std;

vector<int> sz;
int n, m;
long long ans = 0;

bool mamap(int a, int b) {
	return a &b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		sz.push_back(a);
	}
	sort(&sz[0], &sz[sz.size()], mamap);


	ans = sz[0];
	for (int i = 1; i < m; i++)
		ans = sz[i] & ans;
	cout << ans;
	return 0;
}
