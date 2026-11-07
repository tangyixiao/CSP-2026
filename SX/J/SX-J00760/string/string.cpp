#include <bits/stdc++.h>
#define ll long long
#define int register int
#define AKIOI ios::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define AKNOI return 0;
#define pii pair<ll,ll>
#define mpi make_pair
#define fir first
#define sec second
#define endl '\n'
#define op2b sum[op2] + 1
#define op2e sum[op2] + s[op2].fir
using namespace std;
const ll MAXN = 2e5+5;
ll L, n, a, sum[MAXN], ans, k, op1, op2;//S begins with host 1.
char c;
pair<ll, char> s[MAXN];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	AKIOI;
	cin >> n;
	op2 = n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		s[i] = mpi(a, c);
		sum[i + 1] = sum[i] + a;
	}
	L = sum[n + 1];

	while (1) {
		++op1;
		ll kb = sum[op1] + 1, ke = sum[op1] + s[op1].fir;//[sum[op1] + 1, sum[op1] + s[op1].fir]
		ll dxb = L - kb + 1, dxe = L - ke + 1; //[L - ke + 1, L - kb + 1]
		if (kb > L / 2)
			break;

		//分三部分：op2 在 dx 前面或者后面，不会完全覆盖的部分；以及已经完全覆盖的部分。
		if (op2b >= dxe && op2e >= dxb && s[op2].sec != s[op1].sec) {
			ans += (dxb - op2b + 1);
		}//pt.1
		op2--;

		while (op2b >= dxe && op2e <= dxb
		      ) { //还不到左半部分区间的起点，左半部分区间的回文区间完全覆盖了 op2 所覆盖的区间。
			//但是可能会有上一次寻找时剩下的区间，所以要用反转后的终点到 op2 的终点之间的部分。这一部分才是需要修改的地方。
			if (s[op2].sec != s[op1].sec)
				ans += s[op2].fir;
			op2--;
		}

		//现在左半部分区间的回文区间（op1 的回文区间）不能完全覆盖 op2 所覆盖的区间了，需要另一种计算方式。
		ll len = op2e - dxe + 1;
		if ( op2e >= dxe && op2b <= dxe && s[op1].sec != s[op2].sec)
			ans += len;
		//op1 的回文区间的终点和 op2 的区间起点的差的绝对值应该就是 op1 和 op2 的覆盖范围。

		//这时候，对于左半边的第一个区间的回文性计算就完成了，需要进入下一个循环。
	}

	cout << ans;
	AKNOI;
}
/*
3
2 a
2 b
1 c

2

2
2 a
3 a

0

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

3000000000

expected:0pts
*/