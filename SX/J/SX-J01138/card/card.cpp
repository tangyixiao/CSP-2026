#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "r", stdout);
	vector<int> v1;
	queue<int> q;
	int n, m, x, sum[50050];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		for (int r = i; r < n; r++) {
			q.push(v1[r]);
		}
		vector<int> v;
		while (!q.empty()) {
			if (!v.empty()) {
				for (int j = 0; j < v.size(); j++) {
					if (q.front() == v[j]) {
						for (int k = j; k <= v.size(); k++) {
							v.pop_back();
							for (auto it : v) {
								cout << it << " ";
							}
							cout << endl;
						}
						break;
					}
				}
				v.push_back(q.front());
				q.pop();
				for (auto it : v) {
					cout << it << " ";
				}
				cout << endl;
			} else {
				v.push_back(q.front());
				q.pop();
				for (auto it : v) {
					cout << it << " ";
				}
				cout << endl;
			}
		}
		for (int j = 0; j < v.size(); j++) {
			sum[v[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}
