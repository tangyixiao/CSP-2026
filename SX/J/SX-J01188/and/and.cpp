#include <bits/stdc++.h>
using namespace std;
int e[10], f[10], n, m, c;
long long a[200000], b[200000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
//	e[1]=0001;
//	e[2]=0010;
//	e[3]=0011;
//	e[4]=0100;
//	e[5]=0101;
//	e[6]=0110;
//	e[7]=0111;
//	e[8]=1000;
//	e[9]=1001;
//	f[1]=1;
//	f[2]=10;
//	f[3]=11;
//	f[4]=100;
//	f[5]=101;
//	f[6]=110;
//	f[7]=0111;
//	f[8]=1000;
//	f[9]=1001;
	cin >> n >> m;
	c = n - 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[n - m];
	return 0;
}
