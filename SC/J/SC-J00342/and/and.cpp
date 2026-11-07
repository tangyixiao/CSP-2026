#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn_c = 200005;
int arr[maxn_c];
int n, m;

//map<pair<int, int>, int>me;//
int DFS (int a, int b, int num) {
	if (a > n){
		if (b != m) return 0;
		else return num;
	}
	if (b > m) return 0;
	//auto p = make_pair(a, b);//
	//if (me.count(p)) return me[p]; //
	int res = max(DFS(a + 1, b, num), DFS(a + 1, b + 1, (num&arr[a])));
	//me[p] = res;//
	//cout << a << ' ' << b << ' ' << res << '\n';
	
	return res;
}

signed main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	int ans = 0;
	//sort(arr + 1, arr + n + 1, greater<int>());
	for (int i = 1; i <= n; ++i) ans = max(ans, DFS(i, 0, arr[i]));
	cout << ans;

	return 0;
}