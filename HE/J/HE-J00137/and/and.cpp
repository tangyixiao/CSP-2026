#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 50;
bool cmp(int x , int y) {
	return x > y;
}
signed main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	long long a[N] , dp[N] , minn = 100005;
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	sort(a + 1 , a + n + 1 , cmp);
	cout << a[m];
	return 0;
}
