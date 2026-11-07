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

int aa, ab, ba, bb;
char ac, bc;
void solve(){
	scanf("%2lld %2lld%c %2lld %2lld%c", &aa, &ab, &ac, &ba, &bb, &bc);
	if (aa != ba){
		puts("0000");
		return ;
	}
	if (ab != bb){
		puts("1000");
		return ;
	}
	if (!((ac <= 'C' && bc <= 'C') || (ac > 'C' && bc > 'C'))){
		puts("1100");
		return ;
	}
	if (abs((int)ac - (int)bc) > 1){
		puts("1110");
		return ;
	}
	puts("1111");
}
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int t = 1;
	while (t--) solve();
	return 0;
}
