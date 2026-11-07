#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

const int N = 5e5 + 10;
const int M = 3e5 + 10;

int n, m;
int a[N];
int cnt[M];
bool vis[M];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	for (int i = 1; i <= n; ++i)
	{		
		memset(vis, 0, sizeof vis);
		stack<int> s;
		for (int j = i; j <= n; ++j)
		{
			int tmp = a[j];
			while (vis[tmp])
			{
				int tt = s.top();
				s.pop();
				vis[tt] = false;
			}
			s.push(tmp);
			vis[tmp] = true;
		}
		while(!s.empty())
		{
			cnt[s.top()]++;
			s.pop();
		}
	}
	for (int i = 1; i <= m; ++i)
	{
		cout << cnt[i];
		if (i != m)
			cout << ' ';
	}
	return 0;
}

