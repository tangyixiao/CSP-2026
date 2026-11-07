#include <bits/stdc++.h>
using namespace std;

int main() {
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	
	vector<int> arr(n);
	for (auto& x : arr)
		cin >> x;

	int mask = 0;
	for (int mask_level = 29; mask_level >= 0; mask_level--) {
		mask += 1 << mask_level;

		vector<int> newA;
		for (auto x : arr) {
			if ((x & mask) == mask)
				newA.push_back(x);
		}

		if (newA.size() >= m) {
			arr = newA;
		}
		else
			mask -= 1 << mask_level;
	}

	int ans = 0x7fffffff;
	for (int i = 0; i < m; i++) {
		ans &= arr[i];
	}

	cout << ans;


	return 0;
}
