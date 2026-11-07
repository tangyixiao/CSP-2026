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

const int N = 5e5 + 5;
int n, m, a[N], b[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = rd();
	m = rd();
	map<int, int> q;
	for(int i = 1; i <= n; ++ i) {
		a[i] = rd();
	}
	for(int i = 1; i <= m; ++ i) {
		int k = 0;
		q.clear();
		for(int j = 1; j <= n; ++ j) b[i] = 0;
		++ k;
		for(int j = k; j <= n; ++ j) {
			b[j] = a[j];
			if(q[b[j]] == 0) {
				q[b[j]] = j;
			} else {
				int x = q[b[j]];
//				cout << x << " ";
				for(int g = x; g <= j - 1; ++ g) {
//					cout << b[g] << " ";
					q[b[g]] = 0;
					b[g] = 0;
				}
//				cout << '\n';
			}
		}
		int ans = 0;
		for(int l = 1; l <= n; ++ l) {
//			cout << b[l] << ' ';
			if(b[l] == i) {
				ans ++;
			}
		}
//		cout << '\n';
		cout << ans << " ";
	}
	return 0;
}
/*
4 3
1 2 1 3

*/
