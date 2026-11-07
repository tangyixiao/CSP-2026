#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int maxx = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if ((a[i]&a[j]) > maxx) {
				maxx = a[i] & a[j];
			}
		}
	}
	cout << maxx;
	return 0;
}
