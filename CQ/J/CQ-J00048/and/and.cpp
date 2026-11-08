#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int input() {
	int x;
	cin >> x;
	return x;
}
int a[200005], t;
bool cmp(int a, int b) {
	int x = ((a >> t) << t) ^ a;
	int y = ((b >> t) << t) ^ b;
	return x > y;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
    int n = input(), m = input();
    for (int i = 1; i <= n; i ++) a[i] = input();
    sort(a + 1, a + n + 1, greater<int>());
    int k = 0;
    for (int i = 30; i >= 1; i --) if (a[i] >= (1 << i)) {
    	k = i + 1;
    	break;
	} 
    while (n > m && k >= 0) {
    	int cnt = 0;
    	t = k + 1;
    	sort(a + 1, a + n + 1, cmp);
    	for (int i = 1; i <= n; i ++) {
    		if (a[i] & (1 << k)) cnt ++;
    		else break;
		}
		if (cnt == m) {
			int ans = INT_MAX;
			for (int i = 1; i <= m; i ++) ans &= a[i];
			cout << ans;
			return 0;
		} else if (cnt > m) {
			n = cnt, k --;
		} else {
			k --;
		}
	}
	int ans = 2147483647;
	for (int i = 1; i <= m; i ++) ans &= a[i];
	cout << ans;
	return 0;
}
/*
16 8 4 2 1
1  0 0 0 0 16
0  1 1 1 1 15
0  1 0 0 0 8
0  1 1 0 0 12
1  0 1 0 0 20
2  3 3 1 1
*/
