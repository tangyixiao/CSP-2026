#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10, M = 3e3 + 10;
int n, m;
int card[N], countt[M];
long long ans[M];
bool used[M][M];
bool now[M], finded[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
		countt[card[i]]++;
	}
	for (int i = n; i >= 1; i--) {
		if (finded[card[i]]) { //如果这张卡片已经被用过了的话就把他回复成原来的样子
			if (card[i] == card[i + 1]) continue;
			for (int j = 1; j <= m; j++) {
				now[j] = used[card[i]][j];
			}
		} else {
			//如果这张卡片没有被用过的话就统计答案
			now[card[i]] = true;
			for (int j = 1; j <= m; j++) {
				ans[j] = ans[j] + now[j] * countt[card[i]];
				used[card[i]][j] = now[j];
			}
			//将这张卡片标记为已使用
			finded[card[i]] = true;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
		if (i != m) cout << " ";
	}
	return 0;
}