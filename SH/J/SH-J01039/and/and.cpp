#include <bits/stdc++.h>
using namespace std;
#define int long long
priority_queue <int> q,p;
/*auto aqat(int t)
{
	queue <int> q;
	while (t>0)
	{
		if (t==1)
		{
			q.push(1);
			break;
		}
		else if (t==0)
		{
			q.push(0);
			break;
		}
		else
		{
			q.push(t%=2);
			t/=2;
		}
	}
	string as = "";
	while (!q.empty())
	{
		as+=char(q.front());
		q.pop();
	}
	return as;
}*/
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int a;
	for (int i=1;i<=n;i++)
	{
		cin>>a;
		q.push(a);
	}
	int ans = q.top();
	int c = 0;
	q.pop();
	for (int i=2;i<=m;i++)
	{
		c = q.top();
		ans=ans&c;
		p.push(c);
		q.pop();
	}
	int pre = 0;
	if (c == q.top())//存在相同元素
	{
		pre = c;
		while (!p.empty())
		{
			c = c&p.top();
			p.pop();
		}
	}
	cout<<max(ans,pre);
	return 0;
}
