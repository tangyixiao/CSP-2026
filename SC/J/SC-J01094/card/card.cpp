#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5 + 10;

int n, m, a[N], vis[N], ans[N];
stack<int> st;

int main() {
	ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	
	for (int i = 1; i <= n; ++i) {
		for (int j = i; j <= n; ++j) {
			if (vis[a[j]]) {
				while (st.top() != a[j]) {
					vis[st.top()] = 0;
					st.pop();
				}
				st.pop();
			}
			vis[a[j]] = 1;
			st.push(a[j]);
		}
		
		for (int j = 1; j <= m; ++j) ans[j] += vis[j];
		memset(vis, 0, sizeof(vis));
	}
	
	for (int i = 1; i <= m; ++i) {
		cout << ans[i] << " ";
	}
	
	return 0;
}