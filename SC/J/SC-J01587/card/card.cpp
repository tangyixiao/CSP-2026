#include <bits/stdc++.h>
//#define int long long
using namespace std;
int cnt[300005], n, m, a[500005];
void solve(int st){
	map <int, int> mp;
	bool vis[300005];
	memset(vis, 0, sizeof(vis));
	for(int i = st; i <= n; i++){
		if(vis[a[i]]){
			for(int j = mp[a[i]] + 1; j < i; j++){
				vis[a[j]] = 0;
			}
			vis[a[i]] = 1;
		}else{
			mp[a[i]] = i;
			vis[a[i]] = 1;
		}
	}
	for(int i = 1; i <= m; i++){
		cnt[i] += vis[i];
	}
}
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
    if(m == 1){
    cout << 1;
    return 0;
    }
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		solve(i);
	}
	for(int i = 1; i <= m; i++){
		cout << cnt[i] << ' ';
	}
	return 0;
}