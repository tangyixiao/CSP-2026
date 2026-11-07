#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], cnt, ans = 0;
bool h = true, h1 = true, h2 = true;
void ll(int x, int y){
	if(cnt == m){
		ans = max(ans, y);
		return;
	}
	if(x > n) return ;
	if(x == 1){
		cnt ++;
		ll(x + 1, a[x]);
		cnt --;
		ll(x + 1, a[x + 1]);
	} else {
		cnt ++;
		ll(x + 1, y & a[x]);
		cnt --;
		ll(x + 1, y);
	}
	return ;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	if(n <= 20){
		ll(1, 1);
		cout << ans;
	}else if(n <= 2000){
		if(m == 1){
			sort(a + 1, a + n + 1);
			cout << a[n];
		}else if(m == 2){
			for(int i = 1; i <= n; i ++){
				for(int j = 1; j <= n; j ++){
					if(i == j) {
						continue;
					}else{
						ans = max(ans, a[i] & a[j]);
					}
				}
			}
			cout << ans;
		}else if(m == n){
			ans = a[1];
			for(int i = 2; i <= n; i ++){
				ans &= a[i];
			}
			cout << ans;
		}
	}else{
		if(m == n - 1){
			int d[200005][25] = {};
			for(int i = 1; i <= n; i ++){
				int cnt = 1;
				while(a[i]) {
					d[i][cnt] = a[i] | 1;
					a[i] = a[i] >> 1;
					if(d[i][cnt] == 0){
						d[n + 1][cnt] ++;
					}else{
						d[n + 2][cnt] = 1;
					}
				}
			}
			int p = 0, q = 0;
			for(int i = 24; i >= 1; i --){
				if(d[n + 2][i] && d[n + 1][i] < 2){
					p = i; break;
				}
			}
			for(int i = p; i >= 1; i --){
				if(d[n + 1][i] == 1) {
					q = i; break;
				}
			}
			int u = 0;
			for(int i = 1; i <= n; i ++){
				if(d[i][q] == 0){
					u = i; break;
				}
			}
			if(u == 1) ans = a[2];
			else ans = a[1];
			for(int i = 1; i <= n; i ++){
				if(i == u) continue;
				else ans &= a[i];
			}
			cout << ans;
		}else{
			for(int i = 1; i <= n; i ++){
				if(!(a[i] % 2)) h = 0;
				if(a[i] != i - 1) h1 = 0;
				if(a[i] > 4) h2 = 0;
			}
			if(h){
				sort(a + 1, a + n + 1);
				ans = a[n];
				for(int i = n; i >= n - m + 1; i --){
					ans &= a[i];
				}
				cout << ans;
			}else if(h2){
				int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0;
				for(int i = 1; i <= n; i ++){
					if(a[i] == 0) a1 ++;
					else if(a[i] == 1) b1 ++;
					else if(a[i] == 2) c1 ++;
					else if(a[i] == 3) d1 ++;
					else e1 ++;
				}
				if(e1 >= m) cout << 4;
				else if(d1 >= m) cout << 3;
				else if(d1 + c1 >= m) cout << 2;
				else if(d1 + b1 >= m) cout << 1;
				else cout << 0;
			}else{
				ans = a[1];
				for(int i = 2; i <= n; i ++){
					ans &= a[i];
				}
				cout << ans;
			}
		}
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
