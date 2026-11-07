#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
int a[200100];

int vis[200100];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);	
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	ll ans = 0;
	for (int i = 31; i >= 0; i--){
		ll k = 1 << i;
		int cnt = 0;
		for (int j = 1; j <= n; j++){
			if ((a[j] >> i) % 2 == 1 && vis[j] == 0) cnt++;
		}
		if (cnt >= m){
			ans += k;
			for (int j = 1; j <= n; j++){
				if ((a[j] >> i) % 2 == 0) vis[j] = 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
} 
