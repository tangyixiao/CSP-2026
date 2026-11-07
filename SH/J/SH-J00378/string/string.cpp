#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
	long long x;
	char c;
}a[200010], l[200010], r[200010];

long long n, x, tot, sum, ans, cl, cr;
char c;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> c;
		sum += x;
		a[i] = {x, c};
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (tot + a[i].x >= sum / 2)
		{
			l[++cl] = {sum / 2 - tot, a[i].c};
			break;
		}
		else l[++cl] = a[i];
		tot += a[i].x;
	}
	
	tot = 0;	
	for (int i = n; i >= 1; i--)
	{
		if (tot + a[i].x >= sum / 2)
		{
			r[++cr] = {sum / 2 - tot, a[i].c};
			break;
		}
		else r[++cr] = a[i];
		tot += a[i].x;
	}
	
	for (int i = 1, j = 1; i <= cl, j <= cr;)
	{
		if (l[i].x > r[j].x)
		{
			ans += (l[i].c != r[j].c) * r[j].x;
			l[i].x -= r[j].x;
			j++;
		}
		else if (l[i].x == r[j].x)
		{
			ans += (l[i].c != r[j].c) * l[i].x;
			i++, j++;
		}
		else
		{
			ans += (l[i].c != r[j].c) * l[i].x;
			r[j].x -= l[i].x;
			i++;
		}
	}
	cout << ans << endl;
	return 0;
}
