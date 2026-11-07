#include <bits/stdc++.h>
using namespace std;
int n, m, a[100005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int r[1000005];
	cin >> n >> m;
	for(int i = 0;i < n;i ++) cin >> a[i];
	for(int i = 1;i <= m;i ++) cout << a[r[i]] << " ";
	return 0;
}