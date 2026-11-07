#include<bits/stdc++.h>
#define fre(x) freopen(x".in","r",stdin);freopen(x".out","w",stdout)
using namespace std;
int main()
{
	fre("card");
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> v(n+1);
	vector<int> g(m+1);
	vector<int> a(m+1);
	for(int i = 1;i <= n;i++)
	{
		cin >> v[i];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;j <= n;j++)
		{
			if(g[v[j]] != 0)
			{
				for(int t = 1;t <= m;t++)
				{
					if(g[t] > g[v[j]] && g[t] < j) g[t] = 0;
				}
			}
			g[v[j]] = j;
		}
		for(int t = 1;t <= m;t++)
		{
			if(g[t] != 0) a[t]++;
			g[t] = 0;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}