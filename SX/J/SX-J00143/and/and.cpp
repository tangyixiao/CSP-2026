#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2 * 1e5+5;
ll n, m, arr[N], ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	//&
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	sort(arr + 1, arr + n + 1, greater<int>());
	ans = arr[1];
	for (int i = 2; i <= m; i++) {
		ans &= arr[i];
	}
	cout << ans;
	return 0;
}
