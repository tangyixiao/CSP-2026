#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+14;
int n, m, ans;
int a[N];
void dfs1(int now, int cnt, int tmp){
	cnt ++;
	if(cnt == m){
		ans = max(ans, tmp);
		return;
	}
	for(int i = now+1; i <= n; i ++){
		dfs1(i, cnt, tmp&a[i]);
	}
	return;
}/*
void dfs2(int now, int cnt, bool vis[]){
	cnt ++;
	if(cnt == n-m){
		int tmp = pow(2,20)-1;
		for(int i = 1; i <= n; i ++){
			if(!vis[i]) tmp &= a[i];
		}
		ans = max(ans, tmp);
		return;
	}
	for(int i = now+1; i <= n; i ++){
		vis[i] = 1;
		dfs2(i, cnt, vis);
		vis[i] = 0;
	}
	return;
}*/
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if(n <= 20){
		for(int i = 1; i <= n; i ++) cin >> a[i];
		for(int i = 1; i <= n; i ++){
			dfs1(i, 0, a[i]);
		}
		cout << ans << '\n';
		return 0;
	}else if(n <= 2000){
		if(m == 1){
			for(int i = 1; i <= n; i ++){
				cin >> a[i];
				ans = max(ans, a[i]);
			}
			cout << ans << '\n';
		}else if(m == 2){
			for(int i = 1; i <= n; i ++){
				cin >> a[i];
				for(int j = 1; j < i; j ++){
					ans = max(ans, a[i]&a[j]);
				}
			}
			cout << ans << '\n';
		}else{
			ans = pow(2, 20)-1;
			for(int i = 1; i <= n; i ++){
				cin >> a[i];
				ans &= a[i];
			}
			cout << ans << '\n';
		}
		return 0;
	}else{
		int mx = 0;
		bool flag = 0;
		for(int i = 1; i <= n; i ++){
			cin >> a[i];
			mx = max(mx, a[i]);
			if(pow(2, __lg(a[i]))!=a[i]) flag = 1;
		}
		if(mx <= 3){
			int box[4];
			memset(box, 0, sizeof box);
			for(int i = 1; i <= n; i ++){
				box[a[i]] ++;
			}
			if(box[3] >= m) cout << 3 << '\n';
			else if(box[3]+box[2] >= m) cout << 2 << '\n';
			else if(box[3]+box[1] >= m) cout << 1 << '\n';
			else cout << 0 << '\n';
		}else if(!flag){
			int box[21];
			for(int i = 1; i <= n; i ++){
				box[__lg(a[i])]++;
			}
			for(int i = 0; i < 21; i ++){
				if(box[i] >= m){
					cout << pow(2, i) << '\n';
					return 0;
				}
			}
			cout << 0 << '\n';
		}else{
			cout << 0 << '\n';
		}
	}
	return 0;
}
