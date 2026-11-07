#include<bits/stdc++.h>
using namespace std;

long long n, t, cnt = 0, ans = 0;
long long a[200005], a1[200005];
deque <long long> q1;
deque <long long> q2;
char c[200005];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cnt++;
		if (c[i] == c[i - 1] && i > 1)
		{
			cnt--;
			a1[cnt] += a[i];
		}
		else
		{
			a1[cnt] = a[i];
			q2.push_back(c[i] - 'a' + 1);
		}
	}
	for (int i = 1; i <= cnt; i++)
	{
		q1.push_back(a1[i]);
	}
	while (q1.size() > 1)
	{
		if (q2.front() == q2.back())
		{
			t = q1.front() - q1.back();
			if (t > 0)
			{
				q1.pop_back();
				q2.pop_back();
				q1.pop_front();
				q1.push_front(t);
			}
			else if (t < 0)
			{
				q1.pop_back();
				q2.pop_front();
				q1.pop_front();
				q1.push_back(abs(t));
			}
			else
			{
				q1.pop_back();
				q2.pop_back();
				q2.pop_front();
				q1.pop_front();
			}
		}
		else
		{
			t = q1.front() - q1.back();
			if (t > 0)
			{
				ans += q1.back();
				q1.pop_back();
				q2.pop_back();
				q1.pop_front();
				q1.push_front(t);
			}
			else if (t < 0)
			{
				ans += q1.front();
				q1.pop_back();
				q2.pop_front();
				q1.pop_front();
				q1.push_back(abs(t));
			}
			else
			{
				ans += q1.front();
				q1.pop_back();
				q2.pop_back();
				q2.pop_front();
				q1.pop_front();
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
