#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string b;
	int q = 0;
	string k;
	for (int i = 1; i <= n; i++) {
		long long x;
		cin >> x;
		char y;
		cin >> y;
		while (x--) {
			b.push_back(y);
		}
	}
	int ji = 0;
	int cnt = 0;
	for (int i = b.size() - 1 ; i >= 0; i--) {
		if (b[i] == b[ji]) {
			ji++;
			cnt++;
		}
	}
	if (cnt == b.size()) {
		cout << 0;
		return 0;
	}
	return 0;
}
