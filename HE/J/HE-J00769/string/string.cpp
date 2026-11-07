#include <iostream>
#include <string>
#include <deque>

#define int long long

int n, ans;
std::deque<std::pair<int, char> > s;

signed main()
{
	std::ios::sync_with_stdio(false);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a;
		char c;
		std::cin >> a >> c;
		s.push_back({ a, c });
	}
	while (!s.empty())
	{
		int a1 = s.front().first, a2 = s.back().first;
		char c1 = s.front().second, c2 = s.back().second;
		if (c1 != c2)
		{
			int minn = std::min(a1, a2);
			ans += minn;
			s.front().first -= minn;
			s.back().first -= minn;
		}
		else
		{
			int minn = std::min(a1, a2);
			s.front().first -= minn;
			s.back().first -= minn;
		}
		
		if (s.front().first <= 0 && !s.empty())
		{
			s.pop_front();
		}
		if (s.back().first <= 0 && !s.empty())
		{
			s.pop_back();
		}
	}
	std::cout << ans;
	
	return 0;
}
