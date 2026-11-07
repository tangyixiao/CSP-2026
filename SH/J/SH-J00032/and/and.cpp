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
int n, m, a[N], cnt[N], id[N];
int hh[40] = {0, 1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 67108863, 134217727, 268435455, 536870911, 1073741823};
void solve1(){
	// 1-5 O(n * 2^n)
	int ans = 0;
	rep(op, 1, (1 << n) - 1){
		int res = (1 << 30) - 1, k = 0;
		rep(i, 1, n){
			int fl = ((op >> (i - 1)) & 1);
			if (fl){
				k++;
				res &= a[i];
			}
		}
		if (k != m) continue;
		ans = max(ans, res);
	}
	printf("%lld\n", ans);
}
void solve2(){
	// 6
	int ans = 0;
	rep(i, 1, n)
		ans = max(ans, a[i]);
	printf("%lld\n", ans);
}
void solve3(){
	// 7
	int ans = (1 << 30) - 1;
	rep(i, 1, n)
		ans &= a[i];
	printf("%lld\n", ans);
}
void solve4(){
	// 8-10
	int ans = 0;
	rep(i, 1, n)
		rep(j, i + 1, n)
			ans = max(ans, (a[i] & a[j]));
	printf("%lld\n", ans);
}
void solve5(){
	// 11-12
	rep(i, 1, n){
		int x = a[i], j = 0;
		while (x > 0){
			if (x & 1){
				cnt[j]++;
			} 
			if (!(x & 1)) id[j] = i;
			x >>= 1;
			j++;
		}
		rep(k, j, 25) id[k] = i;
	}
//	rep(i, 0, 25) printf("%lld %lld\n", cnt[i], id[i]);
//	puts("");
	int sp = 0;
	per(i, 25, 0)
		if (cnt[i] == n - 1){
			sp = id[i];
			break;
		}
//	printf("%lld\n", sp);
	int ans = (1 << 30) - 1;
	rep(i, 1, n)
		if (i != sp)
			ans &= a[i];
	printf("%lld\n", ans);
}
bool cmp(int a, int b){
	return a > b;
}
void solve6(){
	// 13
	sort(a + 1, a + n + 1, cmp);
	printf("%lld\n", a[m]);
}
void solve(){
	n = read(), m = read();
	rep(i, 1, n) a[i] = read();
	if (n <= 20) solve1();
	else if (m == 1) solve2();
	else if (n == m) solve3();
	else if (m == 2) solve4();
	else if (m == n - 1) solve5();
	else {
		bool ifsolve6 = 1;
		rep(i, 1, n){
			bool fl = 0;
			rep(j, 0, 30)
				if (a[i] == hh[j]) fl = 1;
			if (!fl){
				ifsolve6 = 0;
				break;
			}
		}
		if (ifsolve6){
			solve6();
			return ;
		}
		
	}
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int t = 1;
	while (t--) solve();
	return 0;
}
