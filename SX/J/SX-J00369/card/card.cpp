#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5 * 1e5 + 10;
const int MAXM = 3 * 1e5 + 10;
int n, a[MAXN], m;
int cnt[MAXM];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		vector<int> t;
		for (int j = i; j < n; j++) {
			int fl = 0;
			for (int k = 0; k < t.size(); k++) {
				if (t[k] == a[j]) {
					fl = 1;
					for (int ii = 0; ii <= t.size(); ii++) {
						t.pop_back();
					}
					t.push_back(a[j]);
					break;
				}
			}
			if (fl == 0)
				t.push_back(a[j]);
//			for (int k = 0; k < t.size(); k++)
//				cout << t[k] << " ";
//			cout << endl;
		}
		for (int j = 0; j < t.size(); j++) {
			cnt[t[j]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	return 0;
}
