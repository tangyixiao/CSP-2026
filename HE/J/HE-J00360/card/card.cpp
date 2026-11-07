#include<bits/stdc++.h>
using namespace std;
int n, m, a[500010], cnt[500010];
vector<int> b;
void check(int x)
{
	if(b.empty())
	{
		b.push_back(x);
		return ;
	}
	for(int i = 1; i <= n; i++)
	{
		if(x == b[i])
		{
			for(int j = i; j <= n; j++)
			{
				b[j] = 0;
			}
			return ;
		}
	}
	b.push_back(x);
}
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b.push_back(a[i]);
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j <= n; j++)
		{
			check(j);
		}
		int len = b.size();
		for(int j = 1; j <= m; j++)
		{
			for(int k = 0; k < len; k++)
			{
				if(b[k] == j)
				{
					cnt[j]++;
					break;
				}
			}
		}
		b.clear();
		for(int j = 1; j <= n; j++)
		{
			b.push_back(a[j]);
		}
	}
	for(int i = 1; i <= m; i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
} 
