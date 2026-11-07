#include <iostream>
#include <vector>
using namespace std;
int n, m, a[500005], last[300005], cnt[300005], fa[300005];
vector<int> G[300005];
int sz(int now)
{
	for(int i = 0; i < G[now].size(); i++) cnt[now] += sz(G[now][i]);
	return cnt[now];
}
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i], last[a[i]] = i, cnt[a[i]]++;
	for(int i = 1; i <= m; i++) fa[i] = a[last[i]+1], G[fa[i]].push_back(i);
	sz(0);
	for(int i = 1; i <= m; i++) cout << cnt[i] << " ";
}
