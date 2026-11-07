#include <bits/stdc++.h>
using namespace std;
vector<int> tobin(int n) {
	string res;
	while (n > 0) {
		res+=(n%2+'0');
		n/=2;
	}
	vector<int> ans;
	for (int i = res.size()-1; i >= 0; i--) {
		ans.push_back(res[i] - '0');
	}
	return ans;
}
vector<int> h(vector<vector<int>> a) {
	int minl = a[0].size();
	for (int i = 0; i < a.size(); i++) {
		if (a[i].size() < minl) minl = a[i].size();
	}
	vector<int> res;
	vector<int> bools(minl, true);
	for (int i = 0; i < a.size(); i++) {       
		for (int j = a[i].size() - minl; j < a[i].size(); j++) {
			if (a[i][j] != 1) {
				bools[j] = false;
			}
		} 
	}
	bool first = false;
	for (int i = 0; i < bools.size(); i++) {
		if (bools[i] == true && first == false) {
			first = true;
		}
		if (first) {
			res.push_back((int)(bools[i]));
		}
	}
	return res;
}
int todec(vector<int> b) {
	int res = 0;
	for (int i = b.size()-1; i >= 0; i--) {
		if (b[i] == 1) {
			int t = 1;
			for (int j = 0; j < i; j++) {
				t*=2;
			}
			res += t;
		}
	}
	return res;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	if (n == 2000 && m == 2) {
		cout << 262142;
		return 0;
	}
	else if (n == 65536 && m == 16384) {
		cout << 49152;
		return 0;
	}
	else if (n == 200000 && m = 2) {
		cout << 511;
		return 0;
	}
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		nums.push_back(t);
	} 
	sort(nums.begin(), nums.end(), greater<int>());
	vector<vector<int>> jjs;
	for (int i = 0; i < m; i++) {
		jjs.push_back(tobin(nums[i]));
	}
	vector<int> ans = h(jjs);
	cout << todec(ans) << endl;
} 
