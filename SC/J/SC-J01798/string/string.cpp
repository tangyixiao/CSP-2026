#include <bits/stdc++.h>
using namespace std;
//freopen
//feropen
//srting
//RP++
//今年T2咋这么恶心
//学习weiren?
//33961573wwh 
int n;
long long a[200005];
char c[200005];
long long l = 0;
long long pt1,pt2;
long long ans = 0;
long long sum[200005];
long long p[500005];
char col[500005];
int head;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i ++)
	{
		cin >> a[i] >> c[i];
		l += a[i];
	}
	for (int i = 1;i <= n;i ++)
	{
		sum[i] = a[i] + sum[i - 1];
		p[++ head] = sum[i];
		p[++ head] = l - sum[i];
	}
	sort(p + 1,p + head + 1);
	pt1 = 1;
	for (int i = 1;i <= n;i ++)
	{
		while (p[pt1] <= sum[i] && pt1 <= head)
		{
			col[pt1] = c[i];
			pt1 ++;
		}
	}
	for (int i = 2;i <= head;i ++)
	{
		if (i > head - i)break;
		if (col[i] != col[head - i + 2])
		{
			//cout << i << " " << head - i << endl;
			ans += abs(p[i] - p[i - 1]);
		}
	}
	cout << ans;
	return 0;
} 