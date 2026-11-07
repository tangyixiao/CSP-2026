#include<bits/stdc++.h>
using namespace std;

int n, m, ans, a[500005], b[300005], cnt[300005];
deque <int>q;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (b[a[i]] != 0)
		{
			for (int j = b[a[i]]; j <= i - 1; j++)
			{
				q.pop_back();
			}
		}
		else
		{
			cnt[a[i]]++;
			b[a[i]] = i;
		}
		q.push_back(a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
}
