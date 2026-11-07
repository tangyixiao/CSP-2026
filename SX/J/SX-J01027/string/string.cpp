#include <bits/stdc++.h>
using namespace std;
struct node
{
	long long num;
	char ch;
}a[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	node mp[200010];
	int n;
	cin >> n;
	bool b1 = true;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i].num >> a[i].ch;
		if (i != 1 && a[i-1].ch != a[i].ch)
			b1 = false;
	}
	if (b1 || n == 1)
	{
		cout << "0";
		return 0;
	}
	int e = 1;
	mp[1].num = a[1].num;
	mp[1].ch = a[1].ch;
	for (int i=2;i<=n;i++)
	{
		if (a[i-1].ch == a[i].ch)
			mp[e].num += a[i].num;
		else
		{
			e++;
			mp[e].num = a[i].num;
			mp[e].ch = a[i].ch;
		}
	}
	int k = 1;
	long long ans = 0;
	if (e == 2)
	{
		if (mp[1].num <= mp[2].num)
			cout << mp[1].num;
		else
			cout << mp[2].num;
		return 0;
	}
	for (int p=1;p<=100005;p++)
	{
		bool b = true;
		for (int i=k;i<=e/2;i++)
		{
			if (mp[i].num != mp[e - i + 1].num || mp[i].ch != mp[e - i + 1].ch)
			{
				b = false;
				k = i;
				break;
			}
		}
		if (b)
		{
			cout << ans;
   			return 0;
		}
		if (mp[k].ch == mp[e-k+1].ch)
		{
			if (mp[k].num > mp[e-k+1].num)
			{
				int d = mp[k].num- mp[e-k+1].num;
				mp[k+1].num += d;
				mp[k].num -= d;
				ans += d;
			}
			else
			{
				int d = mp[e-k+1].num - mp[k].num;
				mp[e-k].num += d;
				mp[e-k+1].num -= d;
				ans += d;
			}
		}
		else
		{
			if (k == 1)
			{
				if (mp[e].num>1)
				{
					e++;
					mp[e-1].num--;
				}
				mp[e].ch = mp[k].ch;
				mp[e].num = 1;
				ans++;
			}
			else
			{
				mp[e-k+1].ch = mp[e-k+1].ch;
				ans++;
			}
		}
	}
	cout << mp[1].num;
	return 0;
}