#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 3e5 + 5;
int a[MAXN];
int q[MAXN];
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	freopen ("card.in" , "r" , stdin);
	freopen ("card.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int len = 0;
	for (int i = 1; i <= n; i++) {
		bool f = true;
		for (int j = 1; j <= len; j++) {
			if (q[j] == a[i]) {
				f = false;
				for (int k = j; k < i; k++) {
					q[k] = 0;
				}
			} 
		}
		if (f) {
			q[len] = a[i];
			len++;
		}
	}
	for (int i = 1; i <= n; i++) {
	}
	for (int j = 1; j <= m; j++) {
		for (int i = 1; i <= len; i++) {
			if (q[i] != 0 && j == q[i]) {
				cout << q[i] << " ";
			}
		}
	}

}