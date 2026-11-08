#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5 + 1030;
int n , m , a[N];
int b[N] , fi[N] , la[N] , cnt[N];

signed main () {
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++) cin >> a[i];
	for (int i = 1 ; i <= n ; i++) {
		fill(fi + 1 , fi + m + 1 , N);
		fill(la + 1 , la + m + 1 , -N);
		fill(b + 1 , b + n + 1 , 0);
		for (int j = i ; j <= n ; j++) {
			b[j] = a[j];
			fi[b[j]] = min(fi[b[j]] , j);
			la[b[j]] = max(fi[b[j]] , j);
		}
		for (int j = 1 ; j <= m ; j++) {
			if (fi[j] != la[j]) fill(b + fi[j] , b + la[j] - 1 , 0);
		}
		for (int j = i ; j <= n ; j++) {
			if (b[j]) cnt[b[j]]++;
		}
	}
	for (int i = 1 ; i <= m ; i++) cout << cnt[i] << " ";
	return 0;
}

