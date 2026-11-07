#include <bits/stdc++.h>
using namespace std;
int n, m, idx, a[200005], ans;
struct node{
	int son[2];
}tree[200005];
void insert(int shu)
{
	int p = 0;
	for(int i = 0; i <= 31; i++)
	{
		int u = (shu >> i) & 1;
		if(tree[p].son[u])
			p = tree[p].son[u];
		else
			p = ++idx, tree[p].son[u] = idx;
	}
}
void dfs(int p, int uo, int fu, int fa, int dep)
{
	for(int i = 0; i <= 1; i++)
	{
		int uiop = uo;
		if(tree[p].son[i] == 0 && uo == m - 1)
		{
			ans = max(fu, ans);
			return ;
		}
		if(tree[p].son[i] == 0)
			continue;
		if(tree[p].son[i] != fa + 1)
		{
			uiop++;
			if(uiop == m)
			{
				ans = max(ans, fu);
				break;
			}
		}
		dfs(tree[p].son[i], uiop, fu + i * (dep << 1), p, dep + 1);
	}
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	for(int i = 1; i <= n; i++)
		insert(a[i]);
	dfs(0, 0, 0, 0, 0);
	cout << ans << "\n";
	return 0;
}