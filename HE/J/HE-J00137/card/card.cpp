#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 50;
const int M = 3010;
signed main () {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m , a[N] , b[M] , ans = 0;
	cin >> n >> m;
	int kkk = 1;
	for (int i = 1;i <= n;i ++){
		cin >> a[i];
		if(a[i] == a[i - 1]) {
			kkk --;
		}
		if(a[i] == kkk) {
			b[a[i]] ++;
		}
		kkk ++;
	}
	for (int i = 1;i <= m;i ++) {
		cout << b[i] << "\n";
	}
	return 0;
}
