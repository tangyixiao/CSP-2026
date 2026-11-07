#include <bits/stdc++.h>
#include <deque>
using namespace std;
#define fir first
#define sec second
int ans[20];
void add(long long k)
{
	int use[20];
	memset(use,0,sizeof(use));
	int t = 0;
	while (k > 0)
	{
		t++;
		use[t] = k % 10;
		k /= 10;
	}
	for (int i = 1;i <= t;i++)
	{
		ans[i] += use[i];
		if (ans[i] >= 10)
		{
			ans[i+1]++;
			ans[i] -= 10;
		}
	}
	return;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	for (int i = 0;i < 20;i++)
	{
		ans[i] = 0;
	}
	int T;
	scanf("%d",&T);
	vector<pair<long long, char> > v(T+10);
	for (int i = 1;i <= T;i++)
	{
		scanf("%lld",&v[i].fir);
		getchar();
		v[i].sec = getchar();
	}
	deque<pair<long long, char> > dq;
	for (int i = 1;i <= T;i++)
	{
		dq.push_back(v[i]);
	}
	pair<long long, char> a,b;
	int u;
	while (dq.size() > 1)
	{
		a = dq.front();
		b = dq.back();
		dq.pop_front();
		dq.pop_back();
		if (a.sec != b.sec)
		{
			if (a.fir == b.fir)
			{
				add(a.fir);
			}
			else if (a.fir > b.fir)
			{
				add(b.first);
				a.first -= b.first;
				dq.push_front(a);
			}
			else
			{
				add(a.first);
				b.first -= a.first;
				dq.push_back(b); 
			}
		}
		else
		{
			if (a.first > b.first)
			{
				dq.push_front(a);
			}
			else if (a.fir < b.fir)
			{
				dq.push_back(b);
			}
		}
	}
	int now = 19;
	while (ans[now] == 0 && now >= 1)
	{
		now--;
	}
	if (now == 0)
	{
		printf("0");
		return 0;
	}
	for (int i = now;i >= 1;i--)
	{
		printf("%d",ans[i]);
	}
	return 0;
}
