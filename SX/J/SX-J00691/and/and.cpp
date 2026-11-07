#include <bits/stdc++.h>
using namespace std;
int n, m, a[10005];
int ma = INT_MIN;

int main() {// 3的二进制是0011 12是1100 1与0=0 1与1=1 0与0=0
//3与12==0
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		ma = max(a[i], ma);
	}
	cout << ma - 3;
	return 0;
}
