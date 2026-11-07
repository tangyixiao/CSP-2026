#include <bits/stdc++.h>
using namespace std;
int a[200010],b[200010];
string s[200010];
vector<int> g[200010],ans;
bool vis[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
		while(a[i] > 0)
		{
			s[i] = char(a[i] % 2 + '0') + s[i];
			a[i] /= 2;
		}
		maxn = max(maxn,(int)s[i].size());
	}
	for(int i = 1; i <= n; i++)
	{
		while(s[i].size() < maxn)
		{
			s[i] = '0' + s[i];
		}
	}
	for(int i = 0; i < maxn; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(s[j][i] == '1')
			{
				g[i].push_back(j);
			}
		}
	}
	for(int i = 0; i < maxn; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			vis[j] = 0;
		}
		vector<int> sum;
		for(int v:ans)
		{
			vis[v] = 1;
		}
		if(ans.size() == m)
		{
			break;
		}
		if(ans.empty() && g[i].size() >= m)
		{
			for(int v:g[i])
			{
				sum.push_back(v);
			}
			ans = sum;
		}
		else if(ans.size() > m)
		{
			for(int v:g[i])
			{
				if(vis[v])
				{
					sum.push_back(v);
				}
			}
			if(sum.size() < m)
			{
				break;
			}
			ans = sum;
		}
	}
	int anss = b[ans[0]];
	for(int i = 1; i < m; i++)
	{
		anss &= b[ans[i]];
	}
	cout << anss;
	return 0;
}