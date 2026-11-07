#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	long long l = 1,r = n;
	long long ans = 0;
	long long a1 = 0;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		a1 = max(a1,a[i]);
	}
	if (a1 <= 50 && n > 10)
	{
		long long cnt = 0;
		string s = ""; 
		for (int i = 1;i <= n;i++)
		{
			for (int j = 1;j <= a[i];j++)
			{
				s+=c[i]; 
			}
			cnt += a[i]; 
		}
		for (int i = 1;i <= cnt /2;i++)
		{
			if (a[i-1] != a[cnt-i])
			{
				ans++;
			}
		}
		cout << ans;
		return 0;
	}
	for (int i = l;i < r;i++)
	{
		if (a[i] < a[n-i+1])
		{
			if (c[i] != c[n-i+1])
			{
				ans+=a[i];
				a[n-i+1]-=a[i];
				l++;
			}
			else
			{
				a[n-1]-=a[i];
				l++;
			}
		}
		else if (a[i] > a[n-i+1])
		{
			if (c[i] != c[n-i+1])
			{
				ans+=a[n-i+1];
				a[i]-=a[n-i+1];
				r++;
			}
			else
			{
				a[i]-=a[n-i+1];
				r++;
			}
		}
		else
		{
			if (c[i] != c[n-i+1])
			{
				ans+=a[n-i+1];
				a[i]-=a[n-i+1];
				l++;
				r++;
			}
			else
			{
				a[i]-=a[n-i+1];
				l++;
				r++;
			}
		}
	}
	cout << ans;
	return 0;
}