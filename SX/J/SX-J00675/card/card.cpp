#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long m, n;
	cin >> m >> n;
	int a[n + 5] = {};
	int a_[n + 5] = {};
	int cnt[m + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		while (1) {
			int j = 0;
			if (a_[j] == 0) {
				a_[j] = a[i];
				break;
			}
			j++;
		}
		for (int j = a_.size(); j >= 0; j--) {
			if (a_[j] == a_[a_.size() - 1]) {
				for (int k = a_.size(); k > j; k--) {
					a_[k] = 0;
				}
			}
		}
		for (int j = 0; j < a_.size(); j++) {
			cnt[a_[j]]++;
		}
	}
	for (int j = 0; j < a_.size(); j++) {
		cout << a[j] << ' ';
	}
	return 0;
}