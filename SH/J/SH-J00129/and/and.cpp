#include <bits/stdc++.h>
using namespace std;

int n, m, a[200010], ans=-1;

vector<int> v = {INT_MAX};

void dfs(int dep, int idx) {
	if (dep == m) {
		if (v.back() > ans) ans=v.back();
		return;
	}
	for (int i=idx; i<n; i++) {
		v.push_back(v.back() & a[i]);
		dfs(dep+1, i+1);
		v.pop_back();
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for (int i=0; i<n; i++) cin >> a[i];
	
	dfs(0,0);
	
	cout << ans;
	return 0;
} 
