#include <bits/stdc++.h>
using namespace std;
int n,m,m1,p = 0;
cin >> n >> m;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a[10000],x[1000],x1[1000],x1[1000],x2[1000];
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
	while (m!=0) {
		m%2 = x[p];
		m/2 = m;
		p++;
	}
	for (int e = 0; e <= p; e++) {
		x1[e] = x[p];
		p--;
	}
	for (int f = 0;f <= ; ) {
		while (a[f]!=0) {
			a[f]%2 = x2[f];
			a[f]/2 = m;
			p++;
		}
		for (int e = 0; e <= p; e++) {
			x2[e] = x[p];
			p--;
		}
	}
	cout << x2[e];
	return 0;
}
