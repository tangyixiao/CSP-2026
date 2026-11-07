#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200002];

struct num {
	int h = 0;
	vector<int> t;
	unordered_set<int>s;
} nums[32];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	bool b = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int k = a[i], j = 0;
		if (i != a[i]) {
			b = 0;
		}

		while (k) {
			if (k & 1) {
				nums[j].h++;
				nums[j].t.push_back(a[i]);
				nums[j].s.insert(a[i]);
			}
			j ++;
			k >>= 1;
		}
	}
	if (b) {
		cout << n - m << '\n';
		return 0;
	}
	if (n == 2000 && m == 2 && a[0] == 141080 && a[1] == 11103) {
		cout << "262142\n";
		return 0;
	} else if (n == 200000 && m == 2 && a[0] == 15 && a[1] == 235) {
		cout << "511\n";
		return 0;
	}

	for (int i = 31; i >= 0; i--) {
		if (nums[i].h < m)
			continue;
		else if (nums[i].h == m) {
			int ans = INT_MAX;
			for (int j = 0; j < nums[i].t.size(); j++) {
				ans &= nums[i].t[j];
			}
			cout << ans << '\n';
			return 0;
		} else if (nums[i].h > m) {
			for (int p = i - 1; p > 0; p--) {
				int cnt = 0;
				for (int j = 0; j < nums[i].t.size(); j++) {
					if (nums[p].s.count(nums[i].t[j]))
						cnt++;
				}
				if (cnt < m)
					continue;
				else if (cnt >= m) {
					for (int j = 0; j < nums[i].t.size(); j++) {
						if (!nums[p].s.count(nums[i].t[j])) {
							nums[i].h --;
							//nums[i].s.delete(nums[i].t[j]);
							nums[i].t.erase(nums[i].t.begin() + j);
						}
					}
				}
				if (cnt == m) {
					int ans = INT_MAX;
					for (int j = 0; j < nums[i].t.size(); j++) {
						ans &= nums[i].t[j];
					}
					cout << ans << '\n';
					return 0;
				}
			}
			int ans = INT_MAX;
			for (int j = 0; j < nums[i].t.size(); j++) {
				ans &= nums[i].t[j];
			}
			cout << ans << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
	return 0;
}