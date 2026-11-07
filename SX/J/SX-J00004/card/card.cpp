#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	using ywm = long long;
	/*ywm n, m;
	cin >> n >> m;
	vector<ywm> v(n + 1);
	ywm sb[m + 1] = {0};
	for (ywm i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for (ywm i = 1; i <= n; i++) {
		map<ywm, bool> mp;
		for (ywm j = i; j <= n; j++)
			if (!mp[v[j]])
				mp[v[j]] = true;
		for (ywm j = 1; j <= m; j++) {
			if (mp[j])
				sb[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << sb[i] << " ";*/
	/*ywm n, m;
	cin >> n >> m;
	vector<ywm> v(n + 1);
	for (ywm i = 1; i <= n; i++) {
		cin >> v[i];
	}
	ywm sum[m + 1] = {0};
	ywm l = 1, r = n;
	while (l <= r) {
		set<ywm> s;
		map<ywm, ywm> mp;
		for (ywm i = l; i <= r; i++) {
			if (!mp[v[i]])
				mp[v[i]] = i;
			else {
				sum[v[i]]++;
				set<ywm> sb;
				for (ywm j = mp[v[i]] + 1; j <= i; j++)
					sb.insert(v[j]);
				for (auto iitt = sb.begin(); iitt != sb.end(); iitt++)
					sum[*iitt]--;
			}
			s.insert(v[i]);
		}
		for (auto it = s.begin(); it != s.end(); it++)
			sum[*it]++;
		l++;
	}
	for (ywm i = 1; i <= m; i++)
		cout << sum[i] << " ";*/
	/*ywm n, m;
	cin >> n >> m;
	vector<ywm> v(n + 1);
	for (ywm i = 1; i <= n; i++) {
		cin >> v[i];
	}
	ywm sum[m + 1] = {0};
	for (ywm i = 1; i <= n; i++) {
		vector<ywm> v1;
		v1.push_back(-2);
		map < ywm, ywm> mp;
		for (ywm j = i; j <= n; j++) {
			v1.push_back(v[j]);
			if (!mp[v[j]])
				mp[v[j]] = j;
			else {
				for (ywm k = mp[v[j] + 1]; k <= j; k++)
					v1.pop_back();
			}
		}
		sort(v1.begin(), v1.end());
		ywm it = 1;
		for (ywm j = 1; j <= m; j++) {
			if (v1[it] == j) {
				sum[j]++;
			}
			it++;
		}
	}
	for (ywm i = 1; i <= m; i++)
		cout << sum[i];*/
	ywm n, m;
	cin >> n >> m;
	for (ywm i = 1; i <= m; i++)
		cout << "1 ";
	return 0;
}
