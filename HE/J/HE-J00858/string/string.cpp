#include<bits/stdc++.h>
using namespace std;
int ans,n;
string s;
int m;
bool boo = true;
int a[200005],l[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	s+='0';
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		l[i] = l[i-1] + a[i];
		s+=c[i];
		if (a[i] != 1)
		{
			boo = false;
		}
	}
	m = n / 2;
	if (boo)
	{
	
		if (n % 2 == 0)
		{
			for (int i = m + 1;i <= n;i++)
			{
				if (s[i] != s[2 * m - i + 1])
				{
					ans++;
				}
			}
		}
		else
		{
			for (int i = m + 2;i <= n;i++)
			{
				if (s[i] != s[2 * m + 2 - i])
				{
					ans++;
				}
			}
		}
		cout << ans;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
