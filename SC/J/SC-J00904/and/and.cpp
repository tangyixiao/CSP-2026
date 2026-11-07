#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	int ans = a[n];
	for (int i = n - 1; i > n - m; i--) ans &= a[i];
	cout << ans;
	return 0;
}