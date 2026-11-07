#include <bits/stdc++.h>
using namespace std;

const int N = 5e5,M = 3e5;
int n,m,a[N],cnt[M],vis[M];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++)
	{
		stack <int> s;
		s.push(a[i]);
		vis[a[i]] = true;
		for (int j = i+1;j <= n;j++)
		{
			if (vis[a[j]])
			{
				while (s.top() != a[j])
				{
					vis[s.top()] = false;
					s.pop();
				}
			}
			else
			{
				vis[a[j]] = true;
				s.push(a[j]);
			}
		}
		while (!s.empty())
		{
			vis[s.top()] = false;
			cnt[s.top()] ++;
			s.pop();
		}
	}
	for (int i = 1;i <= m;i++)
	{
		cout << cnt[i] << " ";
	}
	
	return 0;
}
