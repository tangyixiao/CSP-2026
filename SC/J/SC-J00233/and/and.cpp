#include <bits/stdc++.h>
using namespace std;

int cnt[100005];

struct node
{
	long long g;
	string id;
} a[200005];

string change(long long x)
{
	string s = "",ss = "";
	while (x != 0)
	{
		int c = x % 2;
		x /= 2;
		s += char(c+48);
	}
	for (int i=s.size()-1;i>=0;i--)
	{
		ss += s[i];
		if (s[i] == '1')
		{
			cnt[i]++;
		}
	}
	return ss;
}

bool cmp(node x,node y)
{
	return x.g > y.g;
}

int main()
{
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	int n,m,ans = 0,res = 0,flag = 0;
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i].g;
		a[i].id = change(a[i].g);
	}
	sort(a+1,a+n+1,cmp);
	string maxs = a[1].id;
	long long l = maxs.size();
	for (int i=l;i>=0;i--)
	{
		if (cnt[i] >= m)
		{
			ans = i;
		}
	}
	for (int i=1;i<=n;i++)
	{
		string h = a[i].id;
		char ch = h[ans];
		if (ch == '1')
		{
			if (res == 0 && flag == 0)
			{
				res = a[i].g;
				continue;
			}
			res = (res & a[i].g);
		}
	}
	cout << res;
	return 0;
}