#include <bits/stdc++.h>
#define int long long
#define pil pair <int, int>
using namespace std;
const int N = 2e5 + 10;
int sum[32], a[N], num[N][32];
bool vis[N];
int n, m;
void to_2() {
	for(int i = 1; i <= n; i ++){
		int q = a[i];
		int cnt = 0;
		while (q > 0) {
			num[i][cnt] = q % 2;
			cnt ++;
			q /= 2;
		}
	}
	return;
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	to_2();
	for(int i = 0; i <= 31; i ++){
		for(int j = 1; j <= n; j ++){
			sum[i] += num[j][i];
		}
	} 
	int ans = 0;
	for (int i = 31; i >= 0; i --) {
		int wei = (1 << i);
		if (sum[i] >= m) { //有必要保留这一位的贡献
//			cout << i << ' ';
//			cout << sum[i] << '\n';
			for(int j = 1; j <= n; j ++){
				if (num[j][i] == 0 && !vis[j]) {
					vis[j] = 1;
//					cout << "hh " << a[j] << '\n';
					for(int k = i; k >= 0; k --){
						if (num[j][k] == 1) {
							sum[k] --;
						}
					}
				}
			}
			ans += wei;
		}
	}
//	cout << sum[0] << '\n';
	cout << ans << '\n';
	return 0;
}