#include <bits/stdc++.h>
using namespace std;

struct node
{
	long long num;
	char c;
}p[200010];

long long d[2010];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s = "";
	char last = ' ';
	long long cnt = 0;
	for (int i = 1;i <= n;i++)
	{
		long long a;
		cin >> a;
		char c;
		cin >> c;
		d[c - '0'] += a;
		if (c == last)
			p[cnt].num += a;
		else
			p[++cnt].num = a,p[cnt].c = c;
		last = c;
	}
	long long ans = 0;
	for (long long i = 1;i <= cnt;i++)
	{
		long long j = cnt - i + 1;
		if (p[i].c != p[j].c)
		{
			if (p[i].num == p[j].num)
			{
				if (d[p[i].c - '0'] > d[p[j].c - '0'])
					p[j].c = p[i].c;
				else
					p[i].c = p[j].c;
				ans += p[i].num;
			}
			else
			{
				ans += abs(p[i].num - p[j].num);
				if (p[i].num > p[j].num)
					p[i + 1].num += (p[i].num - p[j].num);
				else
					p[j - 1].num += (p[j].num - p[i].num);
			}
		}
		else if (p[i].num != p[j].num)
		{
			ans += abs(p[i].num - p[j].num);
			if (p[i].num > p[j].num)
				p[i + 1].num += (p[i].num - p[j].num);
			else
				p[j - 1].num += (p[j].num - p[i].num);
		}
	}
	cout << ans << endl;
	return 0;
}
