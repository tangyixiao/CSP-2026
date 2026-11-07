#include<bits/stdc++.h>
using namespace std;

inline int rd() {
	int x = 0, f = 1;
	char ch = getchar();
	while(!isdigit(ch)) {
		if(ch == '-') f = -1;
		ch = getchar();
	}
	while(isdigit(ch)) {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}

const int N = 2e5 + 5;
int n, m, a[N], f[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	n = rd();
	m = rd();
	for(int i = 1; i <= n; ++ i) {
		a[i] = rd();
		f[i] = a[i];
	}
	for(int i = 1; i <= n; ++ i) {
		for(int j = m; j >= i; -- j) {
			f[i] = max(f[i], f[i - 1] & a[j]);
//			cout << f[j] << " ";
		}
//		cout << '\n';
	}
	cout <<f[n];
	return 0;
}
