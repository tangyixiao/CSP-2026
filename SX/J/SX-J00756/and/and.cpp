#include <iostream>
using namespace std;

int n, k, a[200005], ma;
bool f[200005];

void dfs( int x, int m, int b) {
	if ( x >= k ) {
		ma = max(ma, m);
		return;
	}
	for ( int i = b ; i <= n ; i++ ) {
		if ( f[i] == false ) {
			f[i] = true;
			dfs(x + 1, m &a[i], i);
			f[i] = false;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> k;
	for ( int i = 1 ; i <= n ; i++ ) {
		cin >> a[i];
	}
	ma = INT_MIN;
	for ( int i = 1 ; i <= n ; i++ ) {
		f[i] = true;
		dfs(1, a[i], i);
		f[i] = false;
	}
	cout << ma;

	return 0;
}
