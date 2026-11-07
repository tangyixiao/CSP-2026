#include <bits/stdc++.h>
using namespace std;
map<int, vector<int> >v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a;
		b = a;
		while (b) {
			int x = b& -b;
			v[x].push_back(a);
			b -= x;
		}
	}
	int ans = 0, cnt;
	while (1) {
		cnt = 0;
		vector<int>p, t;
		for (auto i : v) {
//			cout << i.first << " " << ans << " " << cnt << " ";
			t = i.second;
//			cout << t.size() << "\n";
			if ((t.size() ) >= m) {
				cnt = i.first;
				p = t;
			}
		}
//		cout << "\n";
//		for (int i = 0; i < p.size(); i++)
//			cout << p[i] << " ";
//		cout << "\n\n";
		if (cnt == 0) {
			cout << ans;
			return 0;
		}
		ans += cnt;
		v.clear();
		for (int i = 0; i < p.size(); i++) {
			int x = p[i] % cnt;
			while (x) {
				int y = x& -x;
				v[y].push_back(p[i] % cnt);
				x -= y;
			}
		}
	}
	return 0;
}