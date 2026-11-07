#include <bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	long long cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		cnt += a[i];
	}
	int l = 1,r = n;
	long long ans = 0;
	while(l < r)
	{
		long long x = a[l],y = a[r];
		if(c[l] == c[r])
		{
			if(x > y)
			{
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else
			{
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
		}
		else
		{
			ans += min(x,y);
			if(x > y)
			{
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else
			{
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}