#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 2e5 + 5;

int n;
ll pre[N];
vector<pair<ll, char>> v;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	cin >> n;
	ll len = 0;
	for (int i = 1; i <= n; i++) {
		ll x;
		char c;
		cin >> x >> c;
		len += x;
		if (v.size() && v.back().second == c) {
			v.back().first += x;
		} else {
			v.push_back(make_pair(x, c));
		}
	}
	int sz = v.size();
	if (sz == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < v.size(); i++) {
		pre[i] = (i == 0 ? 0 : pre[i - 1]) + v[i].first;
	}
	vector<pair<ll, char>> v1, v2;
//	ll suma = 0, sumb = 0;;
	if (len % 2 == 0) {
		bool f = 1;
		for (int i = 0; i < v.size(); i++) {
			if (pre[i] <= len / 2) {
				v1.push_back(v[i]);
//				suma += v[i].first;
			} else if (i == 0) {
				v1.push_back(make_pair(len / 2, v[i].second));
//				suma += len / 2;
				v2.push_back(make_pair(pre[i] - len / 2, v[i].second));
//				sumb += pre[i] - len / 2;
				f = 0;
			} else if (f == 1) {
				v1.push_back(make_pair(len / 2 - pre[i - 1] + 1, v[i].second));
//				suma += len / 2 - pre[i - 1] + 1;
				v2.push_back(make_pair(pre[i] - len / 2, v[i].second));
//				sumb += pre[i] - len / 2;
				f = 0;
			} else {
				v2.push_back(v[i]);
//				sumb += v[i].first;
			}
		}
	} else {
		bool f = 1;
		for (int i = 0; i < v.size(); i++) {
			if (pre[i] <= len / 2) {
				v1.push_back(v[i]);
//				suma += v[i].first;
			} else if (i == 0) {
				v1.push_back(make_pair(len / 2, v[i].second));
//				suma += len / 2;
				if (pre[i] != len / 2 + 1) v2.push_back(make_pair(pre[i] - len / 2 - 1, v[i].second));
//				sumb += pre[i] - len / 2 - 1;
				f = 0;
			} else if (f) {
				v1.push_back(make_pair(len / 2 - pre[i - 1] + 1, v[i].second));
//				suma += len / 2 - pre[i - 1] + 1;
				if (pre[i] != len / 2 + 1) v2.push_back(make_pair(pre[i] - len / 2 - 1, v[i].second));
//				sumb += pre[i] - len / 2 - 1;
				f = 0;
			} else {
				v2.push_back(v[i]);
//				sumb += v[i].first;
			}
		}
	}
//	cerr << len / 2 << endl;
//	cerr << suma << " " << sumb << endl;
	reverse(v2.begin(), v2.end());
	int i = 0, j = 0;
	ll ans = len / 2;
	while (i < v1.size() && j < v2.size()) {
		if (v1[i].first < v2[j].first) {
			if (v1[i].second == v2[j].second) {
				ans -= v1[i].first;
			} 
			v2[j].first -= v1[i].first;
			i++;
		} else if (v1[i].first == v2[j].first) {
			if (v1[i].second == v2[j].second) {
				ans -= v1[i].first;
			} 
			i++;
			j++;
		} else {
			if (v1[i].second == v2[j].second) {
				ans -= v2[j].first;
			} 
			v1[i].first -= v2[j].first;
			j++;
		}
	}
	cout << ans;
	return 0; 
}
