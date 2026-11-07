#include <bits/stdc++.h>
using namespace std;
int n , m , k;
int a[200010];
int cc[10000000000];
int xq(int s , int q) {
	if (s == 1) {
		for (int i = q; i < n; i++) {
			return a[i];
		}
	}
	if (s != m) {
		for (int i = q; i < n; i++) {
			return xq(m - 1 , i + 1) & a[i]; 
		}
	} else {
		for (int i = q; i < n; i++) {
			cc[k] = xq(m - 1 , i + 1) & a[i];
			k++;
		}
	}
}
int main() {
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < 1000000000; i++) {
		ans = max(cc[i - 1] , cc[i]);
	}
	cout << ans;
	return 0;
}