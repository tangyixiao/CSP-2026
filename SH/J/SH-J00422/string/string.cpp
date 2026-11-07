#include <bits/stdc++.h>
using namespace std;
long long n, a[200020], l, j, ans, tmp1, tmp2;
char ch[200020];
struct Node
{
	long long pos, len;
	bool flag;//判断是否是后面翻转过来的
	char c; 
}s[400040];
bool cmp(Node x, Node y)
{
	return x.pos < y.pos or x.pos == y.pos and x.flag < y.flag;
}
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	s[0].pos = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> ch[i];
		s[i].pos = s[i - 1].pos + a[i - 1];
		s[i].c = ch[i];
		s[i].len = a[i];
		l += a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		s[n + i].pos = l + 2 - s[i].pos - a[i];
		s[n + i].flag = 1;
		s[n + i].c = s[i].c;
		s[n + i].len = a[i];
	}
	sort(s + 1, s + 2 * n + 1, cmp);
	for (int i = 1; s[i].pos <= (l + 1) / 2; i++)
	{
		if (s[i].flag == 0)
		{
			tmp1 = i - 1;
			if (s[tmp2].c != s[i].c) ans += s[tmp2].pos + s[tmp2].len - s[i].pos;
		}
		else
		{
			tmp2 = i - 1;
			if (s[tmp1].c != s[i].c) ans += s[tmp1].pos + s[tmp1].len - s[i].pos;
		}
	}
	cout << -ans;
	return 0;
}
