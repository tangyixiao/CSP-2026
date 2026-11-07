#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int maxx = -1;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		maxx = max(maxx, m &a);
	}
	cout << maxx;
	return 0;
}
