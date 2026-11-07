#include<bits/stdc++.h>
using namespace std;
int n,m,p[35],ans;
int a[200005];
int sum[200005];
string b[200005];
bool bb[35]; 
deque<int> q;
string s(int x)
{
	string c;
	for (int i = 30;i >= 0;i--)
	{
		if (x >= p[i])
		{
			c += '1';
			x -= p[i];
		}
		else
		{
			c += '0';
		}
	}
	return c;
}
void jin()
{
	p[0] = 1;
	for (int i = 1;i <= 30;i++)
	{
		p[i] = p[i-1] * 2;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	jin();
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		b[i] = s(a[i]);
	}
	for(int i = 0;i <= 30;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			sum[i] += b[j][i] - '0';
			if (b[j][i] == '0')
			{
				bb[i] = true;
			}
		}
	}
	for (int i = 0;i <= 30;i++)
	{
		if (sum[i] != 0)
		{
			if (m % 2 == 0)
			{
				ans += p[30-i];
			}
			else
			{
				if (bb[i])
				{
					ans += p[30-i];
				}
			}
		}
	}
	sort(a + 1,a + n + 1);
	cout << a[n - m + 1];
	return 0;
}
