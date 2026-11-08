#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2e5 + 10;

int n, m;
int mark[31];

int popcount(int x) {
	return __builtin_popcount(x);
}

struct Node {
	int idx, val, pop;
	Node(int _idx = 0, int _val = 0, int _pop = 0) {
		idx = _idx; val = _val; pop = _pop;
	}
	
	bool operator < (const Node &w) const {
		if (pop != w.pop) return pop < w.pop;
		return val < w.val;
	}
} v[N];

int main(int argc, char *argv[]) {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ) {
		cin >> v[i].val;
		v[i].idx = i;
		v[i].pop = popcount(v[i].val);
		mark[v[i].pop] ++ ;
	}
	
	sort(v + 1, v + 1 + n);
	
	vector<int> pl[31];
	for (int i = 0; i < 30; i ++ ) {
		for (int j = 1; j <= n; j ++ ) if (v[j].pop == i) pl[i].push_back(v[j].val);
	}	
	
	bool pd = false;
	int ans = -1, st = -1, maxi = -1;
	for (int i = 30; i > 0; i -- ) if (mark[i] > 0) {
		maxi = i;
		break;
	}
	
	for (auto i : pl[maxi]) st = max(st, i);
	for (int i = 0; i < 30; i ++ ) {
		if (mark[i] >= m) {
			int res = st, len = 1;
//			if (i == 1) for (auto j : pl[i]) cout << j << " "; cout << "\n";
			for (auto j : pl[i]) {
				if (len < m) {
//					if (i == 1) cout << res << " " << j << "\n";
					res &= j;
				}
			}
			
			ans = max(ans, res); pd = true;
		} else continue;
	}
	
	if (pd) {
		cout << ans << "\n";
		return 0;
	} else {
		int len = 0, res;
		for (int i = 29; i >= 0; i -- ) {
			if (!mark[i]) continue;
			for (auto j : pl[i]) {
				if (!len) res = j, len = 1;
				else if (len < m) res &= j, len ++ ;
			}
		}
		
		cout << res << "\n";
	}
	

	return 0;
}