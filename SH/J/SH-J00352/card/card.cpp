#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifdef LOCAL
#define debug(x) x
#else
#define debug(x)
#endif

void FileIO(const char * inf, const char * ouf) {
	freopen(inf, "r", stdin);
	freopen(ouf, "w", stdout);
}

constexpr int MAXN = 500010;

int n, m;
int a[MAXN];
int ans[MAXN], cnt[MAXN];
int color[MAXN];
stack<int> stk;

void play(int x) {
	for (int i=1;i<=m;i++) cnt[i] = 0, color[i] = 0;
	for (int i=x;i<=n;i++) {
		if (color[a[i]]) {
			int target = a[i];
			while (!stk.empty() && stk.top() != target) {
				color[stk.top()] = 0;
				stk.pop();
			}
		} else {
			stk.push(a[i]);
		}
		color[a[i]] = i;
	}
	while (!stk.empty()) {
		cnt[stk.top()]++;
		stk.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	FileIO("card.in", "card.out");
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++) {
		play(i);
		for (int i=1;i<=m;i++) ans[i] += (cnt[i] > 0);
	}
	for (int i=1;i<=m;i++) cout<<ans[i]<<" \n"[i==m];
	
}
