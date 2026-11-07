#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5 + 10;
int n, m, ans, cnt[35], a[maxN];
vector<int> from[35];
unordered_map<int, bool> visited; 

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 0; j <= 30; j++) {
			if (j == 0 && a[i] & 1 == 1) {
				cnt[0]++;
				from[0].push_back(a[i]);
			}
			else if (a[i] & (1 << j)) {
				cnt[j]++;
				from[j].push_back(a[i]);
			}
		}
	}
	bool flag = false;
	vector<int> used;
	for (int i = 30; i >= 0; i--) {
		if (used.size() >= m && flag == true) {
			vector<int> cur, del;
			for (int val : from[i]) {
				if (visited[val] == true) cur.push_back(val);
				else del.push_back(val);
			}
			if (cur.size() >= m) {
				ans |= (1 << i);
				used = cur;
				for (int val : del) visited[val] = false;
			}
		} else if (flag == false && cnt[i] >= m) {
			flag = true;
			ans |= (1 << i);
			used = from[i];
			for (int val : from[i]) visited[val] = true;
		}
	}
	cout << ans;
	return 0;
}
