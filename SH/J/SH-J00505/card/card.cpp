#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5, M = 3e5 + 5;
int n, m, a[N], ans[M], cnt[M];
bool fA = 1;
deque<int> s;

void del(int x)
{
	while (s.back() != x)
	{
		cnt[s.back()]--;
		s.pop_back();
	}
	cnt[s.back()]--;
	s.pop_back();
}

void ct()
{
	deque<int> ss = s;
	while (!ss.empty())
	{
		ans[ss.front()]++;
		ss.pop_front();
	}
}

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (fA and a[i] < a[i - 1]) fA = 0;
	}
	if (fA or n == m)
	{
		for (int i = 1; i <= n; i++)
		{
			ans[a[i]] = i;
		}
		for (int i = 1; i <= m; i++) cout << ans[i] << " ";
		cout << "\n";
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++) cnt[j] = 0;
		s.clear();
		for (int j = i; j <= n; j++)
		{
			if (cnt[a[j]] > 0)
			{
				del(a[j]);
			}
			s.push_back(a[j]);
			cnt[a[j]]++;
		}
		ct();
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	cout << "\n";
	return 0;
}
