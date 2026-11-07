#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;
int n, m, a[200001], g = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (a[j]&a[j + 1] > m) {
				m = a[j] & a[j + 1];
			}
		}
	}
	cout << m;
	return 0;
}
