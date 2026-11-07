#include <bits/stdc++.h>
#define int long long
using namespace std;

int length, target;
int values[1 << 20];

int result;

inline static void dfs(int current, int value, int prevent) {
	if (current == target) {
		result = max(result, value);
		return ;
	}
	for (int source = prevent + 1; source <= length; source++) {
		if (prevent == 0) dfs(current + 1, values[source], source);
		dfs(current + 1, value & values[source], source);
	}
	return ;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
//	cin.exceptions(ios::badbit | ios::failbit);
	
	cin >> length >> target;
	
	for (int current = 1; current <= length; current++) cin >> values[current];
	
	if (length <= 20) { // 25
		result = -1e18;
		dfs(0, 0, 0);
		cout << result << '\n';
		return 0;
	}
	
	if (target == 1) { // 5
		cout << *max_element(values + 1, values + 1 + length);
		return 0;
	}
	
	if (target == length) { // 5
		result = values[1];
		for (int current = 2; current <= length; current++) result &= values[current];
		cout << result << '\n';
		return 0;
	}
	
	if (target == 2) { // 15
		result = -1e18;
		for (int left = 1; left <= length; left++) 
			for (int right = left + 1; right <= length; right++) 
				result = max(result, values[left] & values[right]);
		cout << result << '\n';
		return 0;
	}
	
	int source = 1;
	for (int current = 1; current <= length; current++) 
		if ((1 << (__lg(values[current] + 1))) != values[current] + 1) {
			source = 0;
			break;
		}
	
	if (source) { // 5
		sort(values + 1, values + length + 1, greater<int>());
		result = values[1];
		for (int current = 2; current <= target; current++) result &= values[current];
		cout << result << '\n';
		return 0;
	}
	
	source = 1;
	for (int current = 1; current <= length; current++) 
		if (values[current] != current - 1) {
			source = 0;
			break;
		}
	
	if (source && ((1 << (__lg(length))) == length)) { // 10
		cout << length - target << '\n';
		return 0;
	}
	
	return 0;
}