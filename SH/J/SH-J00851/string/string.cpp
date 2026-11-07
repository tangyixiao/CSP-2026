#include <bits/stdc++.h>
#include <cstdio>
#define ll long long
using namespace std;
struct node
{
	ll num;
	char letter;
};
int n;
ll sum;
node a[200010];
string s;

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	bool flag = 1;
	cin >> n;
	if (n == 1)
	{
		cout << 0;
		return 0;
	}
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i].num >> a[i].letter;
		
	}
	for (int i = 2;i <= n;i++)
	{
		if (a[i].letter != a[i - 1].letter)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		cout << 0;
		return 0;
	}
	int l = 1, r = n;
	int d;
	while (l < r)
	{
		if (a[l].letter != a[r].letter)
		{
			if (a[l].num >= a[r].num)
			{
				d = a[r].num;
				a[l].num -= a[r].num;
				r--;
				
			}
			else
			{
				d = a[l].num;
				a[r].num -= a[l].num;
				l++;
			}
			sum += d;	
		}
		else
		{
			if (a[l].num > a[r].num)
			{
				a[l].num -= a[r].num;
				r--;
			}
			if (a[l].num == a[r].num)
			{
				l++;
				r--;
			}
			else
			{
				a[r].num -= a[l].num;
				l++;
			}	
		}
		
	}
	cout << sum;
}
