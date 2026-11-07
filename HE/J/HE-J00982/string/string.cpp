#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], ans;
string c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long m = n, i = 1,cnt = 0;
	while(m--)
	{
		cin >> a[i] >> c[i];
		cnt++;
		if(c[i] == c[i-1])
		{
			a[i-1] += a[i];
			a[i] = 0;
			c[i] = '0';
			i--;
			cnt--;
		}
		i++;
	}	
	long long l = 1, r = cnt;
	while(l < r)
	{
		if(c[l] != c[r])
		{
			if(a[l] >= a[r])
			{
				ans += a[r];
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else
			{
				ans += a[l];
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
		}
		else
		{
			if(a[l] >= a[r])
			{
				a[l] -=a[r];
				a[r] = 0;
			}
			else
			{
				a[r] -= a[l];
				a[l] = 0;
			}
		}
	}
	cout << ans;
	return 0;
}
