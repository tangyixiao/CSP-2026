#include<bits/stdc++.h>
using namespace std;
deque<long long> q;
deque<char> c;
long long ans,n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		long long t;
		char y;
		cin >> t >> y;
		if(!q.empty())
		{
			if(c.back() == y)
			{
				t += q.back();
				q.pop_back();
				q.push_back(t);
				continue;
			}
		}
		q.push_back(t);
		c.push_back(y);
	}
	while(q.size() > 1)
	{
		if(q.front() > q.back())
		{
			if(c.front() != c.back())
			{
				ans += q.back();
			}
			long long tamp = q.front();
			tamp -= q.back();
			q.pop_front();
			q.push_front(tamp);
			q.pop_back();
			c.pop_back();
		}
		else if(q.front() == q.back())
		{
			if(c.front() != c.back())
			{
				ans += q.back();
			}
			q.pop_front();
			q.pop_back();
			c.pop_front();
			c.pop_back();
		}
		else
		{
			if(c.front() != c.back())
			{
				ans += q.front();
			}
			long long tamp = q.back();
			tamp -= q.front();
			q.pop_back();
			q.push_back(tamp);
			q.pop_front();
			c.pop_front();
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 