#include <bits/stdc++.h>
#define ll long long
#define int register int
#define AKIOI ios::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define AKNOI return 0;
#define pii pair<ll,ll>
#define mpi make_pair
using namespace std;
const ll MAXN = 1e5+5;
ll tra, trb, ans[5]; //che xiang
string a, b;
ll anum, bnum, alet, blet; //pai||zuo wei zi mu
map<char, bool>mp; //1-up_side||0-down_side

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	AKIOI;
	mp['A'] = 0;
	mp['B'] = 0;
	mp['C'] = 0;
	mp['D'] = 1;
	mp['E'] = 1;

	cin >> tra >> a >> trb >> b;
	anum = a[0] * 10 + a[1];
	bnum = b[0] * 10 + b[1];
	alet = a[2]/*-'A'+1*/;
	blet = b[2]/*-'A'+1*/;

	if (tra == trb) {
		ans[1] = 1;
		if (anum == bnum) {
			ans[2] = 1;
			if (mp[alet] == mp[blet]) {
				ans[3] = 1;
				if (abs(alet - blet) == 1) {
					ans[4] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= 4; i++)
		cout << ans[i];
	AKNOI;
}
/*
CSP-J2026 游记

# day 0

在市里买了一些零食和水（考虑到早上应该不吃早饭），然后进行一些睡觉。

水是临期的，970mL 的水居然只要 2 CNY，我去我真厉害 /se

# day 1

进行一些上车。

路上进行一些拍照片，刷手机什么的（？）

不是的车怎么做到这么快的，平时 2h 的车程今天居然 1h20min 就到了（惊惧）这得飙到多少时速了 /oh

# day 1.5

8:00 左右就到考场了，SX 坞城校区。

然后进门之后我问监考我的考场在哪，监考给我指个路，然后我上了三楼发现进不去，下楼一问才发现是走错了，然后又神秘的绕到另一边考试。

考完试之后还得回那边去拿我东西（不不不我无疑是愤怒的）。

今日能量消耗 += 500 kal /fn。

### upd 8:32

什么叫密码发不下来？很绝望了

### upd 8:55

AC T1.

T1 蛮简单的。开T2。

### upd 11:31

我还是退役吧。

T2 调了 inf 次都调不出。

不对，这傻逼电脑，怎么 1e9+1-1=1e9+2？

还剩半小时，我换毛线电脑。

不对不对，刚刚复现了一下怎么又好了？

11:44了，只能寄希望于下午S了……
*/