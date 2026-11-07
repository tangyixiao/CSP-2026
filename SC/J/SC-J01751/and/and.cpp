#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m;
int a[N];
int ans = INT_MIN;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (((a[i] & a[j]) >= ans) && (i != j)) {
				ans = (a[i] & a[j]);
			}
		}
	}
	cout << ans;
	return 0;
}