#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i <= (r); i ++ )
#define per(i, l, r) for(int i = (l); i >= (r); i -- )
#define frein(s) freopen(s, "r", stdin)
#define freout(s) freopen(s, "w", stdout)
#define endl '\n'
using namespace std;

static constexpr int N = 5e5 + 5;
static int n, m, a[N], suf[N], p[N], siz[N], ans[N];
vector<int> t[N];

void dfs(int u) {
	siz[u] = 1;
	for(auto v : t[u]) {
		dfs(v);
		siz[u] += siz[v];
	}
}

int main() {
	frein("card.in"), freout("card.out");
	ios :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	rep(i, 1, n) cin >> a[i];
	per(i, n, 1) {
		suf[i] = p[a[i]];
		p[a[i]] = i;
	}
	rep(i, 1, n - 1) {
		if(suf[i]) t[suf[i]].push_back(i);
		else t[i + 1].push_back(i);
	}
	dfs(n);
	rep(i, 1, n) {
		if(!suf[i]) ans[a[i]] = siz[i];
	}
	rep(i, 1, m) cout << ans[i] << " ";
	return 0;
}
//code by wsy_I. luogu uid: 1152799
/*
J 组 AK 了，这个题在对拍。我猜的结论，目前拍了很多组没拍出来。
应该是时候写点什么，发表一下感慨了？
（话说我这个不会要上迷惑行为大赏吧）

哎，其实我这个时候来打比赛实际上是心态爆炸的，很容易情绪失控。
J 组当时 T4 跑过所有大样例的时候都差点哭出来了。
学校分班之后，也不知道我和 npy 现在关系怎么样了。
我对她还重要吗。我是不是一个可有可无的人了。
她曾是我前途路上的灯塔啊。而我之前对她啥也不是。
我就是一个初一下学期分班考全班倒一的滚木。
她已经给我很多面子了，我还强求永远在一起干嘛。
她现在都在遂宁了。跟现在在考试的我隔着几百公里。
至少她给过我美好的回忆。至少我一直会对她好。这就足够了。
*/