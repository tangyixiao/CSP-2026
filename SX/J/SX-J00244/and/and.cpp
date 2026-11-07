#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, r, maxx, indx, zmaxx;
int a[200005];
int b[200005];
int v[200005];
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> r;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int k = 1; k <= n; k++){
		b[1] = a[k];
		v[k] = 1;
		for (int j = 2; j <= r; j++){
			for (int i = 1; i <= n; i++){
				if (!v[i]){
					if (maxx < (b[j - 1] & a[i])){
						maxx = b[j - 1] & a[i];
						indx = i;
					}
				}
			}
			b[j] = maxx;
			maxx = 0;
			v[indx] = 1;
		}
		zmaxx = max(zmaxx, b[r]);
		memset(v, 0, sizeof(v));
		memset(b, 0, sizeof(b));
		indx = 0;
	}
	cout << zmaxx;
	return 0;
}
