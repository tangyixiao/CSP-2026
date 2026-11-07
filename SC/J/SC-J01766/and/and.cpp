#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[200005];
int ans = 0;

void dfs(int cnt, int sum, int i) {
	if(sum < ans) {
		return;
	}
	if(cnt == m) {
		ans = sum;
		return;
	}
	if(i >= n) {
		return;
	}
	if(n - i < m - cnt) {
		return;
	}
	
	dfs(cnt + 1, sum & a[i], i + 1);
	dfs(cnt, sum, i + 1);
	
	return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	for(int i=0; i+m<n; i++) {
		dfs(1, a[i], i + 1);
	}
	
	cout << ans;
	return 0;
}