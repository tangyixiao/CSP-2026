#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 50;
int n,m,a[N],mp[N],ans[N];
bool vis[N];
int32_t main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n; ++ i){
		cin >> a[i];
	}
	for(int i = 1;i <= n; ++ i){
		for(int j = 1;j <= m; ++ j){
			mp[j] = 0;
			vis[j] = false;
		}
		for(int j = 1;j < i; ++ j) vis[a[j]] = true;
		for(int j = i;j <= n; ++ j){
			if(mp[a[j]] != 0){
				for(int k = mp[a[j]] + 1;k < j; ++ k){
					vis[a[k]] = true;
					mp[a[k]] = 0;
				}
			}
			vis[a[j]] = false;
			mp[a[j]] = j;
		}
		for(int j = 1;j <= m; ++ j){
			if(!vis[j]){
				ans[j] ++; 
			}
		}
	}
	for(int i = 1;i <= m; ++ i){
		if(i != m) cout << ans[i] << ' ';
		else cout << ans[i];
	} 
	return 0;
}
