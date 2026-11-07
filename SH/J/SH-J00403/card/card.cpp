#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, a[500003], ans[300003], cnt[300003], last[300003], first[300003];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cnt[j] = 0, first[j] = 0, last[j] = 0;
		}
		for(int j = i; j <= n; j++){
			if(cnt[a[j]] == 0) cnt[a[j]] = 1, first[a[j]] = j;
			if(cnt[a[j]] == 1) last[a[j]] = j;
		}
		ll f = 1e18, l = -1;
		for(int j = 1; j <= m; j++){
			if(last[j] != 0){
				f = min(first[j], f), l = max(last[j], l);
			}
		}
		for(int j = i; j <= f; j++){
			ans[a[j]]++;
		}
		for(int j = l + 1; j <= n; j++){
			ans[a[j]]++;
		}
		for(int i = 1; i <= m; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
