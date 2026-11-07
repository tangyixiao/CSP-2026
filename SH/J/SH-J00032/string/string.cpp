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

const int N = 2e5 + 10;
int n, sum, ans, cnt;
struct seg{
	int l, r;
	char c;
}tmp[N], lin[N];
void solve(){
	n = read();
	rep(i, 1, n){
		int len = read();
		tmp[i].l = sum + 1;
		tmp[i].r = sum + len;
		sum += len;
		scanf(" %c", &tmp[i].c);
	}
	tmp[0].c = '#';
	rep(i, 1, n){
		if (tmp[i].c != tmp[i - 1].c){
			cnt++;
			lin[cnt] = tmp[i];
		}
		else lin[cnt].r = tmp[i].r;
	}
//	rep(i, 1, cnt){
//		printf("%lld %lld %c\n", tmp[i].l, tmp[i].r, tmp[i].c);
//	}
	int pl = 1, pr = cnt;
	while (pl < pr){
		int len = min(sum - lin[pl].l + 1, lin[pr].r) - max(sum - lin[pl].r + 1, lin[pr].l) + 1;
		if (lin[pl].c != lin[pr].c) ans += len;
		if (sum - lin[pl].r + 1 == lin[pr].l) pl++, pr--;
		else if (sum - lin[pl].r + 1 > lin[pr].l) pl++;
		else pr--;
	}
	printf("%lld\n", ans);
}
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int t = 1;
	while (t--) solve();
	return 0;
}
