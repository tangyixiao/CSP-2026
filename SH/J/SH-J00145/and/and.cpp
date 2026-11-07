#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 2e6 + 10;
int n, m;
struct Trie
{
	struct Node{int ch[2] = {}, vis = 0;} tr[N];
	int tot = 1, nowu[N] = {}, cur = 0;
	void insert(int x)
	{
		int u = 1;
		for (int p = 29; p >= 0; --p)
		{
			int& v = tr[u].ch[min(1ll, x & (1 << p))];
			if (!v) v = ++tot;
			u = v;
			++tr[u].vis;
		}
		return ;
	}
	int solve()
	{
		int ans = 0;
		cur = 1;
		nowu[cur] = 1;
		for (int i = 29; i >= 0; --i)
		{
			int sum0 = 0, sum1 = 0;
			for (int j = 1; j <= cur; ++j)
			{
				int u = nowu[j];
				if (!u) continue;
				int v0 = tr[u].ch[0], v1 = tr[u].ch[1];
				if (v0) sum0 += tr[v0].vis;
				if (v1) sum1 += tr[v1].vis;
			}
			if (sum1 >= m)
			{
				ans = (ans << 1) | 1;
				for (int j = 1; j <= cur; ++j) if (nowu[j]) nowu[j] = tr[nowu[j]].ch[1];
			}
			else
			{
				ans = (ans << 1);
				int tcur = cur;
				for (int j = 1; j <= tcur; ++j)
				{
					int u = nowu[j];
					if (!u) continue;
					if (tr[u].ch[1])
					{
						++cur;
						nowu[cur] = tr[u].ch[1];
					}
					nowu[j] = tr[u].ch[0];
				}
			}
		}
		return ans;
	}
} trie;

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		trie.insert(x);
	}
	cout << trie.solve() << '\n';
	return 0;
}
//a little interesting
