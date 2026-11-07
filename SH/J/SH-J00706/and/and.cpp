#include<bits/stdc++.h>
const int N = 2e5 + 20;
using namespace std;
int n, m, a[N], ans;
vector<int> e[40];
void dfs(int p)
{
	if(p < 0)
		return;
	if((int)e[p].size() < m)
	{
		dfs(p - 1);
		return;
	}
	ans += (1 << p);
	for(int i = 0; i < p; i++)
		e[i].clear();
	for(int i = 0; i < (int)e[p].size(); i++)
	{
		int t = e[p][i], res = 0;
		while(t && (res < p))
		{
			if(t & 1)
				e[res].push_back(e[p][i]);
			t >>= 1;
			res++;
		}
	}
	dfs(p - 1);
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		int t = a[i], p = 0;
		while(t)
		{
			if(t & 1)
				e[p].push_back(a[i]);
			t >>= 1;
			p++;
		}
	}
	dfs(30);
	cout << ans;
}
