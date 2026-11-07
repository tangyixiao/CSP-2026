#include <bits/stdc++.h>
#define int long long
using namespace std;

stack<int> st;
bool used[500005];
int card[500005], ans[500005];

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (used[card[j]]) {
				while (!st.empty() && st.top() != card[j]) {
					used[st.top()] = 0;
					st.pop();
				}
				if (!st.empty()) st.pop();
			}
			st.push(card[j]);
			used[card[j]] = 1;
		}
		while (!st.empty()) {
			ans[st.top()]++;
			st.pop();
		}
		memset(used, 0, sizeof used);
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
