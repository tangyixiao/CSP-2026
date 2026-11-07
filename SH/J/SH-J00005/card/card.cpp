#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL M = 3e5 + 10;
const LL N = 5e5 + 10;
//bool f1;
LL n, m, a[N], pre_pos[M], nxt[N];
LL ans[M];
bool vis[M];
//bool f2;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	memset(pre_pos, 0, sizeof pre_pos);
	memset(nxt, 0, sizeof nxt);
	for(LL i = 1; i <= n; i++){
		cin >> a[i];
		if(pre_pos[a[i]])	nxt[pre_pos[a[i]]] = i;
		pre_pos[a[i]] = i;
	}
//	for(LL i = n; i; i--){
//		if(pre_pos[a[i]])	nxt[pre_pos[a[i]]] = i;
//		pre_pos[a[i]] = i;
//	}
	memset(ans, 0, sizeof ans);
	for(LL i = 1; i <= n; i++){
		memset(vis, false, sizeof vis);
		for(LL j = i; j <= n; j++){
			if(!vis[a[j]])	ans[a[j]]++;
			vis[a[j]] = true;
			if(nxt[j])	j = nxt[j] - 1;
		}
	}
//	for(LL i = n; i; i--){
//		
//		if(nxt[i])	i = nxt[i] + 1;
//	}
	for(LL i = 1; i <= m; i++){
		if(i < m)
			cout << ans[i] << " ";
		else
			cout << ans[i] << '\n';
	}
//	cout << abs(&f1 - &f2) / 1024.0 / 1024.0 << '\n';
	return 0;
}

