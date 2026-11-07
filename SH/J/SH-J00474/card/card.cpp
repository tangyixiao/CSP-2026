#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005], sum[500005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		unordered_set<int> st;
		for (int j = i; j <= n; j++) {
			if (st.find(a[j]) != st.end()) {
				st.erase(st.begin(), st.find(a[j]));
				continue;
			}
			st.insert(a[j]);
		}
		for (auto num : st) {
			sum[num]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}
