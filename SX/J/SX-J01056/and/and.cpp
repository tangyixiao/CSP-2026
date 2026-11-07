#include <bits/stdc++.h>
using namespace std;
int n, m, maxx = INT_MIN;
long long a[200005];

int main() {
	freopen("and.in", r, stdin);
	freopen("and.out", w, stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 2; i <= n; i++) {
		if ((a[i - 1]&a[i]) >= maxx) {
			maxx = a[i - 1] & a[i];
		}
	}
	cout << maxx;
}