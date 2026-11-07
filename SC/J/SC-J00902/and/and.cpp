#include <bits/stdc++.h>
using namespace std;

int n, m, c[200010], a[200010], ans;

bool cmp (int x, int y){
	return x > y;
}

int main(){
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= n; i++){
		scanf ("%d", &a[i]);
	}
	sort (a + 1, a + n + 1, cmp);
	int l = 1, r = n;
	for (long long k = 30; k >= 0ll; k--){
		long long x = (1ll << k);
		int j = l;
		for ( ; j <= r; j++){
			if (a[j] >= x * 2ll)
				a[j] -= x * 2ll;
			else
				break ;
		}
		for (int i = l; i <= r; i++)
			c[i] = a[i];
		int L = l, R = j;
		for (int i = l; i <= r; i++){
			if ((c[L] > c[R] && L < j) || R > r){
				a[i] = c[L++];
			}
			else{
				a[i] = c[R++];
			}
		}
		int i = l; 
		for ( ; i <= r; i++){
			if (!(a[i] & x)){
				break ;
			}
		}
		if (i - l >= m){
			r = i - 1;
			ans += x;
		}
	}
	printf ("%d", ans);
	return 0;
}