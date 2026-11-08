#include<bits/stdc++.h>
using namespace std;
const int N = 2e5, M = 35;
int a[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	sort(a + 1,a + n + 1,greater<>());
	int k = a[1];
	for(int i = 1;i <= m;i++) {
		k = k & a[i];
	}
	cout << k;
	return 0;
}
