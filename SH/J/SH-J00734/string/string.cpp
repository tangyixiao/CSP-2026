#include <bits/stdc++.h>
using namespace std;

int main() {
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int n; cin >> n;
	vector<pair<int, char>> str(n);

	int tot_len = 0;

	for (auto& p : str) {
		cin >> p.first >> p.second;
		tot_len += p.first;
	}

	int ker = str[0].first;
	int ker_idx = 0;
	while (2 * ker - 1 < tot_len) {
		ker_idx++;
		ker += str[ker_idx].first;

		if (ker_idx >= n)
			cout << "Bug1!";
	}

	int cost = 0, temp;
	for (int l = (tot_len + 1) / 2 - (tot_len % 2) - (ker - str[ker_idx].first),
		 r = ker - (tot_len + 1) / 2,
		 li = ker_idx, ri = ker_idx ; ;) {

		if (min(l, r) < 0 || li < 0 || ri >= n) {
			cout << ker << ' ' << ker_idx << ' ' << l << ' ' << r << ' ' << li << ' ' << ri << endl;
			cout << "Invalid Argument!\nPls check if your code is right\n";
			exit(1);
		}
		if (l == 0) 
			li--, l = str[li].first;
		if (r == 0)
			ri++, r = str[ri].first;

		temp = min(l, r), l -= temp, r -= temp;
		
		if (str[li].second != str[ri].second)
			cost += temp;

		if (l == 0 && r == 0 && li == 0 && ri == n - 1)
			break;
	}

	cout << cost << endl;

	return 0;
}
