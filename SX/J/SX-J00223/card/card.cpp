#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5+5;
int n, m, a[N], cnt[N];

struct Node {
	bool flag;
	int idx;
} vis[N];

signed main() {
	freopen( "card.in", "r", stdin );
	freopen( "card.out", "w", stdout );

	cin >> n >> m;

	for ( int i = 1 ; i <= n ; i ++ )
		cin >> a[i];

	// 第几局
	for ( int i = 1 ; i <= n ; i ++ ) {
		int t = i;
		// 从第几张牌打
		memset( vis, 0, sizeof vis );
		for ( int j = i ; j <= n ; j ++ ) {
			if ( vis[a[j]].flag == 0 ) {
				vis[a[j]].flag = 1; // 打出这张牌
			} else {
				t = j;
			}
		}
		for ( int j = t ; j <= n ; j ++ )
			cnt[a[j]] ++;
	}

	for ( int i = 1 ; i <= m ; i ++ )
		cout << cnt[a[i]] << " ";

	return 0;
}