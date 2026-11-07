#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, m, a[N], ans;
int main() {
//	freopen("and3.in", "r", stdin);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + 1 + n), ans = a[n];
	for (int i = n - 1; i >= n - m + 1; i--) ans &= a[i];
	cout << ans;
	return 0; 
}
/*
4 2
3 15 12 12

CCF 你最好了，多给点分可以吗？QwQ
*/