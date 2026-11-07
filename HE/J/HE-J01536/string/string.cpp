#include<bits/stdc++.h>
using namespace std;
struct aa
{
	long long a;
	char c;
}o,u;
long long n,t = 0;
deque<aa> q;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> o.a >> o.c;
		q.push_back(o);
	}
	while(!q.empty())
	{
		o = q.front();
		q.pop_front();
		while(!q.empty() && o.a > 0)
		{
			u = q.back();
			q.pop_back();
			if(o.c != u.c)
			{
				if(o.a >= u.a)
				{
					o.a -= u.a;
					t += u.a;
				}
				else
				{
					t += o.a;
					u.a -= o.a;
					o.a = 0;
					q.push_back(u);
				}
			}
			else
			{
				if(o.a >= u.a)
				{
					o.a -= u.a;
				}
				else
				{
					u.a -= o.a;
					o.a = 0;
					q.push_back(u);
				}
			}
		}
	}
	cout << t;
	return 0;
}
