#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	vector<char>d, p;
	for (int i = 1; i <= n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int i = 1; i <= a; i++) {
			d.push_back(c);
		}
	}
	for (int i = d.size() - 1; i >= 0; i++) {
		p.push_back(d[i]);
	}
	bool flag = true;
	for (int i = 0; i < d.size(); i++) {
		if (d[i] != p[i]) {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		cout << "0";
		return 0;
	}
	int o = d.size(), cnt = 0;
	for (int i = 1; i <= o / 2; i++) {
		if (d[i] != p[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}