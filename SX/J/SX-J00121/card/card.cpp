#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,s,n) for(int i=s;i<=n;i++)
int a[100005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> a[i];
	}
	cout << n << " " << m << " ";
	fr(i, 1, m - 2) {
		cout << a[i] << " ";
	}
	return 0;
}
