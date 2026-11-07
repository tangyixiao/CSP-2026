#include<bits/stdc++.h>
using namespace std;
int n, m, a[10005], vis[10005], ans[10005], sum[10005];
map<int,int> mp;
void lblr(int l, int r){
	for(int i = l;i <= r - 1;i++){
		vis[i] = 1;
	}
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		memset(ans, 0, sizeof(ans));
		memset(vis, 0, sizeof(vis));
		mp.clear();
		for(int j = i;j <= n;j++){
			if(mp.count(a[j]) && vis[mp[a[j]]] == 0){
				lblr(mp[a[j]], j);
			}
			mp[a[j]] = j;
		}
		for(int j = i;j <= n;j++){
			if(!vis[j]){
				if(!ans[a[j]]){
					sum[a[j]]++;
					ans[a[j]] = 1;
				}
			}
		}
	}
	for(int i = 1;i <= m;i++){
		cout << sum[i] << " ";
	}
	return 0;
}