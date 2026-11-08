#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n, x; 
vector<int> a;
vector<int> ans;
void dfs(int step, int i, int grade, int pre) {
	if (i == n - 1) return ;
	if (step == x) {
		ans.push_back(grade);
		return;
	}
	pre = grade; 
	dfs(step + 1, i + 1, grade and a[i + 1], pre);
	grade = pre;
	dfs(step - 1, i, grade, pre);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> x;
	a.resize(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	

	int mx = INT_MIN;
	if (x == 1) {
		sort(a.begin(), a.end());
		cout << a[n - 1] << endl;
		return 0;
	}
	if (n == x) {
		int cur = a[0];
		for (int i = 1; i < n; ++i) {
			cur &= a[i];
		}
		cout << cur << endl;
		return 0;
	}
	if (x == 2) {
		int q = INT_MIN;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
//				int cur = a[i] & a[j];
//				cout << cur << ' ';
				q = max(q, a[i] & a[j]);
			}
		}
		cout << q << endl;
		return 0;
	}
	dfs(0, 0, a[0], 0);
	for (auto& x : ans) mx = max(mx, x);
	cout << mx << endl;
	return 0;
} 
/*
4 2
3 15 12 12
*/
