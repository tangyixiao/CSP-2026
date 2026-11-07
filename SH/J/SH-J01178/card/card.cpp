#include <bits/stdc++.h>
using namespace std;
int n, m;
queue <int> a, b;
int num[300005];
bool check(int x)
{
	queue <int> c = b;
	while (!c.empty())
	{
		int p = c.front();
		c.pop();
		if (p == x)
			return 0;
	}
	return 1;
}
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		a.push(x);
	}
	queue <int> d = a;
	int pos;
	while (!d.empty()){
		a = d;
		while (!a.empty())
		{
			pos = a.front();
			a.pop();
			if (check(pos))
			{
				b.push(pos);
			}
			else
			{
				queue <int> v;
				while (b.front() != pos)
				{
					int x = b.front();
					b.pop();
					v.push(x);
				}
				while (!b.empty())
				{
					b.pop();
				}
				b.push(pos);
				while(!v.empty())
				{
					b.push(v.front());
					v.pop();
				}
			}
		}
		while(!b.empty())
		{
			num[b.front()]++;
			b.pop();
		}
		d.pop();
	}
	for (int i = 1; i <= m; i++)
	{
		cout << num[i] << " ";
	}
	return 0;
}
