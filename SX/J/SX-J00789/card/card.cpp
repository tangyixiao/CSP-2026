#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	vector<int> v(200005);
	vector<int> v2(200005);
	map<int, int> mp;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		mp.insert({i, 0});
	}
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		v[i] = a;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i ; j <= n; j++) {
			int t = 0;
			bool flag = 0;
			for (int w = 0; w < v2.size(); w++) {
				if (v2[w] == v[j]) {
					t = w;
					flag = 1;
					break;
				}
			}
			if (flag) {
				int a = v2.size() - t ;
				for (int i = 1; i < a; i++) {
					v2.pop_back();
				}
			} else
				v2.push_back(v[j]);
		}
		for (int i = 0; i < v2.size(); i++) {
			mp[v2[i]]++;
		}
		v2.clear();
	}

	for (int i = 1; i <= m; i++) {
		cout << mp[i] << " ";
	}
	return 0;
}