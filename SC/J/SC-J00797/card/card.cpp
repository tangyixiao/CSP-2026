#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
bool flag[300005];
stack<int> st;
int ans[300005];
signed main() {
	ios::sync_with_stdio (0), cin.tie (0), cout.tie (0);
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	} 
	for (int k = 1; k <= n; k++) {
		stack<int> st;
		for (int i = k; i <= n; i++) {
			if (flag[a[i]]) {
				while (st.top () != a[i]) {
					flag[st.top ()] = 0;
					st.pop ();
				}
			}
			flag[a[i]] = 1;
			st.push (a[i]);
			//cout << '\n';
		}
		for (int i = 1; i <= m; i++) {
			if (flag[i]) {
				ans[i]++;
			//	cout << i << ' ';
			}
		}
		
		memset (flag, 0, sizeof flag);
	} 
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/