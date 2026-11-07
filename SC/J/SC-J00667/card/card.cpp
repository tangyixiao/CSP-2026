#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5+5;
ll n, m, a[N];
ll st[N], top;
ll vis[N], up[N];
ll ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {      //局数
		top = 0;
		for (int j = i; j <= n; j++) {  //牌
			if (!vis[a[j]]) {			//这个花色没有出现过
				st[++top] = a[j];
				vis[a[j]] = 1;
				up[a[j]] = top;			//这个花色第一次出现的位置
			} else {					//出现过了
				for (int k = up[a[j]] + 1; k <= top; k++)
					vis[st[k]] = 0;
				top = up[a[j]];			//回退
			}
		}
		for (int j = 1; j <= top; j++)
			ans[st[j]]++;
		memset(vis, 0, sizeof(vis));
		memset(up, -1, sizeof(up));
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}