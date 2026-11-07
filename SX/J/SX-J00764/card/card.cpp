#include <bits/stdc++.h>
using namespace std;
//no!没想法。先打个暴力、
typedef long long ll;
const int N = 5e5+248, M = 3e5+248;
ll n, m;
ll a[N], maxa;
ll apr[M];//统计出现次数
bool suma[M];//牌桌上前面有没有点数为i的牌

void solve(int start) {
	stack<int> st;
	memset(suma, 0, sizeof(suma));
	for (int i = start; i <= n; i++) {
		if (suma[a[i]]) {
			ll now = st.top();
			st.pop();
			suma[now] = false;
			while (now != a[i]) {
				now = st.top();
				suma[now] = false;
				st.pop();
			}
			st.push(a[i]);
			suma[a[i]] = true;
		} else {
			suma[a[i]] = true;
			st.push(a[i]);
		}
	}
	ll lft;
	while (!st.empty()) {
		lft = st.top();
		apr[lft]++;
		st.pop();
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	//baoli
	for (int i = 1; i <= n; i++)
		solve(i);
	for (int i = 1; i <= m; i++)
		printf("%lld ", apr[i]);
	return 0;
}