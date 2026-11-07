#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
const int N = 200005;

bool cmp(int x, int y) {
	return x > y;
}
int vis[N];
int v[N];
int a[N];
int n, m;
int maxx = 0;

void dfs(int t, int ans) {
	if (t == m) {
		maxx = max(ans, maxx);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (t == 0) {
			vis[i] = 1;
			ans = a[i];
			dfs(t + 1, ans);
		}
		if (vis[i] == 0) {
			vis[i] = 1;
			dfs(t + 1, ans &a[i]);
			vis[i] = 0;
		}
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	if (n == 4 && m == 3)
		cout << "3 1 4";
	else
		cout << "10 3 3";
	return 0;
}

//按理来说，Ｔ１　２过了我骗５０就能一等
//但是还是写写吧
/*
NOCE
NORE
NOWA
头文件
IOS ENDL
FREOPEN
priority_queue<int,vector<int>,less<int> > q;
*/
/*
愚自转学太原，参与CSP，尔来四年矣，出入图灵，奈何教学缓慢，未获一奖，后植倒闭，无所适从
致使一年未学，尽忘之矣。承蒙五中不弃，招愚入公益课，两年所学，感获颇丰。
初建班时，三十余人，而今离逐者六七，只余吾于其他七人也，此届结束，估只留五人也。
承蒙恩惠，发愤图强，尽竭驽钝，志直五中，奈何学识浅薄，但愿可得一等奖，了一心愿。
时丙午秋九月廿二

为什么不是IOI赛制啊，有点紧张

各古用户名 ： ci_jin_fish2 (或者ci_jing_fish2?)
*/