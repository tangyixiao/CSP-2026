#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;
int n, m;
bool vis[N];
long long a[N];
int maxn = INT_MIN;

long long quick_pow(long long a, long long b){
	long long ans = 1;
	long long kk = a;
	while (b){
		if (b & 1){
			ans *= kk;
		}
		b >>= 1;
		kk *= kk;
	}
	return ans;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		int ans = 0;
		long long kk = a[i];
		while (kk){
			kk >>= 1;
			ans ++;
		}
		maxn = max(maxn, ans);
	}
	for (int i = maxn; i >= 0; i--){
		int ans = 0;
		for (int j = 1; j <= n; j++){
			if (vis[j] == 1){
				continue;
			}
			long long ls = ((1 * 1ll) << i);
			if (a[j] & ls){
				ans ++;
			}
		}
		if (ans < m){
			continue;
		}
		for (int j = 1; j <= n; j++){
			if (vis[j] == 1){
				continue;
			}
			long long ls = ((1 * 1ll) << i);
			if (!(a[j] & ls)){
				vis[j] = 1;
			}
		}
	}
	long long ans = quick_pow(2, 32) - 1;
	for (int j = 1; j <= n; j++){
		if (vis[j] == 1){
			continue;
		}
		ans = ans & a[j];
		m--;
		if (!m){
			break;
		}
	}
	cout << ans;
	return 0;
}
