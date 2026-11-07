#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m, a[500010], c[500010], ans[300010], cnt;

void use(int x) 
{
	for (int i = x; i <= n; i++)
	{
		bool flag = false;
		for (int j = 1; j <= cnt; j++)
			if (a[j] == c[i])
			{
				cnt = j;
				flag = true;
				break;
			}
		if (!flag) a[++cnt] = c[i];
	}
}

void solve()
{
	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		memset(a, 0, sizeof a);
		use(i);
		for (int j = 1; j <= cnt; j++)
			ans[a[j]]++; 
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " "; 
	cout << endl;
}


int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> c[i];
	solve();
	return 0;
}
