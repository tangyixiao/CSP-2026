#include <iostream>
using namespace std;
struct node
{
	int a;
	char c;
}l[200005];
long long p[200005];
char pc[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, cur = 0;
	cin>>n;
	long long cnt = 0;
	for (int i=1; i <= n; i++)
	{
		cin >> l[i].a >> l[i].c;
	}
	for (int i = 1; i <= n; i++)
	{
		if (l[i].c == l[i - 1].c)
		{
			p[cur] += l[i].a;
		}
		else
		{
			p[++cur] = l[i].a;
			p[cur] += p[cur - 1];
			pc[cur] = l[i].c;
		}
	}
	p[0] = 1;
	pc[0] = l[1].c;
	pc[cur] = l[n].c;
	long long L, R;
	if (p[cur] % 2 == 1)
	{
		L = R = p[cur] / 2 + 1;
	}
	else
	{
		L = p[cur] / 2;
		R = L + 1;
		bool flag = 0;
		for (int i = 1; i <= cur; i++)
		{
			if (p[i] >= R && L >= p[i - 1] + 1)
			{
				flag = 1;
			}
		}
		if (!flag)
		{
			cnt++;
		}
	}
	while (!(L == 1 && R == p[cur]))
	{
		int x = 1, y = cur, ans = 0;
		while (x <= y)
		{
			int mid = (x + y) / 2;
			if (p[mid] < L)
			{
				ans = mid;
				x = mid + 1;			
			}
			else
			{
				y = mid - 1;
			}
		}
		int m1 = L - p[ans];
		char c1 = pc[ans];
		x = 1, y = cur, ans = 0;
		while (x <= y)
		{
			int mid = (x + y) / 2;
			if (p[mid] > R)
			{
				ans = mid;
				y = mid - 1;	
			}
			else
			{
				x = mid + 1;
			}
		}
		int m2 = p[ans] - R;
		char c2 = pc[ans];
		if (m1 < m2)
		{
			if (c1 != c2)
			{
				cnt += m1;
			}
			L -= m1;
			R += m1;
		}
		else
		{
			if (c1 != c2)
			{
				cnt += m2;
			}
			L -= m2;
			R += m2;
		}
	}
	cout << cnt;
	return 0;
}