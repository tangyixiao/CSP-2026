#include <bits/stdc++.h> 
using namespace std;
int n, m;
int a[200010];
int f[2][200010];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	if (n < 2e5){
		if (m == 2){
			int ans = 0;
			for (int i = 1; i <= n; i++){
				for (int j = i+1; j <= n; j++){
					ans = max(ans, a[i] & a[j]);
				}
			}
			cout << ans << endl;
		}else{
			f[0][0] = (1<<30)-1;
			for (int i = 1; i <= n; i++){
				for (int j = 0; j <= m; j++){
					f[i&1][j] = f[i-1&1][j];
					if (j >= 1) f[i&1][j] = max(f[i-1&1][j-1] & a[i], f[i&1][j]);
				}
			}
			cout << f[n&1][m] << endl;
		}
	}else{
		sort(a+1, a+n+1, greater<int>());
		cout << a[m] << endl;
	}
	return 0;
}
