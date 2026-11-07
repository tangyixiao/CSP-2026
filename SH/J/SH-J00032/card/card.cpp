// CSP 2026 rp++
// 多测清空了吗
// 滚动数组清空了吗
// 四倍线段树了吗
// 多测保证 sumn 是手动清空吗
// long long 开了吗
// 开 ll 会 MLE 吗
// freopen 写对了吗
// 文件名写对了吗
// 文件夹建对了吗 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for (int i = (a); i <= (b); i++) 
#define repp(i, a, b) for (int i = (a); i < (b); i++) 
#define per(i, a, b) for (int i = (a); i >= (b); i--) 
#define perr(i, a, b) for (int i = (a); i > (b); i--) 
#define endl '\n'
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
inline int read(){
	int res = 0, f = 1; char c = getchar();
	while (!isdigit(c)){ if (c == '-') f = -1; c = getchar(); }
	while (isdigit(c)){ res = res * 10 + c - '0'; c = getchar(); }
	return res * f;
}

// Definitions.

const int N = 5e5 + 10;
int n, m, a[N], vis[N], c[N], ans[N];
void solve1(){
	// 48pts 1-12 O(n^2)
	rep(st, 1, n){
		int r = 0; 		// 最右边的牌下标 
		rep(i, 1, m) vis[i] = 0;
		rep(i, st, n){
			if (!vis[a[i]] || (vis[a[i]] && (vis[a[i]] > r || c[vis[a[i]]] != a[i]))){
				// 没有插入过这牌，或者被拿掉了
				r++;
				vis[a[i]] = r;
				c[r] = a[i]; 
			}
			else{
				r = vis[a[i]];
			}
		}
//		rep(i, 1, r){
//			printf("%lld ", c[i]);
//		}
//		puts("");
		rep(i, 1, r) ans[c[i]]++;
	}
	rep(i, 1, m - 1){
		printf("%lld ", ans[i]);
	}
	printf("%lld\n", ans[m]);
}
void solve2(){
	rep(i, 1, n){
		if (a[i] != a[n]) ans[1]++, ans[2]++;
		else ans[a[i]]++;
	}
	printf("%lld %lld\n", ans[1], ans[2]);
}
void solve(){
	n = read(), m = read();
	rep(i, 1, n) a[i] = read();
	if (n <= 5000) solve1();
	else if (m == 2) solve2();
}
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int t = 1;
	while (t--) solve();
	return 0;
}
