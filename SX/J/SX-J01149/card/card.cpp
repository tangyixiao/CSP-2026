#include <bits/stdc++.h>
using namespace std;
//就40min了，能骗多少算多少,争一下
const int MAXN = 5 * 1E5+5;
const int MAXM = 3 * 1E5+5;

int sum[MAXM], l[MAXN], m, n;
bool flag[MAXM];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> l[i];
		sum[l[i]] = i;
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}

//没时间思考了喵，旁边的哥们一直在叹气捏
//美美21行写了特殊性质A拿20分跑路了喵
