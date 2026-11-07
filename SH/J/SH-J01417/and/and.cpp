#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 2e5 + 10;

int n, m;
vector<string> g;
vector<int> v[40];

string calc(int x) {
	string res = "";
	while (x > 0) {
		if (x % 2 == 1) res += '1';
		else res += '0';
		x /= 2;
	}
	int tmp = res.size();
	for (int i = tmp-1; i < 30; i++) res += '0';
	reverse(res.begin(), res.end());
	return res; 
}

int to_int(string s) {
	int ans = 0;
	for (int c : s) ans = ans * 2 + c - '0';
	return ans;
}

bool cmp(string x, string y) {
	for (int i = 0; i < x.size(); i++) {
		if (x[i] > y[i]) return true;
		if (x[i] < y[i]) return false;
	}
	return true;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		g.push_back(calc(x));
	}
	sort(g.begin(), g.end(), cmp);
	for (int i = 0; i < 30; i++) {
//		cout << i << " ===> ";
		for (int j = 0; j < g.size(); j++) {
			if (g[j][i] == '1') {
			v[i].push_back(j);
//			cout << to_int(g[j]) << " ";
}
		} 
//		cout << "\n";
	}
	int ans = 0;
	for (int i = 0; i < 30; i++) {
//		cout << v[i].size() << "\n";
		if (v[i].size() >= m) {
			int res = to_int(g[v[i][0]]);
			for (int j = 1; j < m; j++) {
				res = (res & to_int(g[v[i][j]]));
			}
			ans = max(ans, res);
		}
	}
	cout << ans << "\n"; 
	return 0;
}
