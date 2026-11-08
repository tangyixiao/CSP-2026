#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long a[N];
char s10[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i ++ )
	{
		long long x;
		char c;
		cin >> x >> c;
		a[i] = x;
		s10[i] = c;
	}
	int l = 1;
	long long ans = 0;
	for (int r = n;r >= 1 && l < r;r -- )
	{
		while (l < r && r >= 1)
		{
			if (s10[r] != s10[l])
			{
				if (a[r] > a[l])
				{
					ans += a[l];
					a[r] -= a[l];
					l ++;
				}
				else if (a[r] < a[l])
				{
					ans += a[r];
					a[l] -= a[r];
					r --;
				}
				else if (a[r] == a[l])
				{
					ans += a[r];
					l ++;
					break;
				}
			}
			else
			{
				if (a[r] > a[l])
				{
					a[r] -= a[l];
					l ++;
				}
				else if (a[r] < a[l])
				{
					a[l] -= a[r];
					r --;
				}
				else if (a[r] == a[l])
				{
					l ++;
					break;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
