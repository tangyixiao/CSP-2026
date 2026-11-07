#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int a[N];
long long n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << a[n];
	return 0;
}
