#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
int a[200010] = {};
int andt(int a, int b) {
	int ans = 0, i = 1;
	while (a != 0 && b != 0) {
		int t = ((a % 2) && (b % 2));
		ans += t * i;
		i *= 2;
		a /= 2;
		b /= 2;
	}
	return ans;
}
struct T{
	int value;
	bool valid;
};
T dfs(int i, int m, int picked, int anded) {
//	cout << i << ' ';
	if (picked == m) {
		T t;
		t.value = anded;
		t.valid = true;
		return t;
	}
	if (i == n + 1) {
		T t;
		t.value = anded;
		t.valid = false;
		return t;
	}
//	cout << "nopicked==m" << ' ';
	T ans;
	ans.valid = false;
	T t = dfs(i + 1, m, picked, anded);
	if (t.valid == true) {
		ans = t;
	}
	t = dfs(i + 1, m, picked + 1, andt(anded, a[i]));
	if (t.valid == true) {
		ans.value = max(ans.value, t.value);
		ans.valid = true;
	}
	return ans;
}
int main () {
	freopen("and.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
//		cout << "ok" << ' ';
	}
	long long t = 1;
	for (int i = 1; i <= 31; i++) {
		t *= 2;
	}
//	cout << "okk" << endl;
	cout << dfs(1, m, 0, t - 1).value;
	return 0;
}
