#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	freopen("card.in", "r", stdin);
	freopen("card.out","w", stdout);

	int n, m;
	cin >> n >> m;
	vector<int>arr(n + 1, 0), ans(n + 1, 0);
	for (int i = 1; i <= n; i++)cin >> arr[i];


	for (int i = 1; i <= n; i++) {
		vector<int>st;
		st.reserve(n + 1);
		st.push_back(0);
		vector<int>vis(m + 1, 0);
		int index = 1;
		for (int j = i; j <= n; j++) {
			if (vis[arr[j]] != 0) {
				for (; index - 1 > vis[arr[j]]; index--) {
					vis[st.back()] = 0;
					st.pop_back();
				}
			} else {
				st.push_back(arr[j]);
				vis[arr[j]] = index++;
			}
		}
		for (int i = 1; i < index; i++)ans[st[i]]++;
	}

	for (int i = 1; i <= m; i++)cout << ans[i] << "\0 "[i != m];
	cout << '\n';

	return 0;
}