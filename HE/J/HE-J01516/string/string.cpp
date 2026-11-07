#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n, l = 1;
	cin >> n;
long long a[n + 10] = {}, r = n;
	char c[n + 10] = {};
	long long ans = 0;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i]; 
	}
	while(l <= r)
	{
		if(a[l] > a[r])
		{
			if(c[l] != c[r])
			{
				ans += a[r];
			}
			a[l] -= a[r];
			r--;
		}
		else if(a[l] == a[r])
		{
			if(c[l] != c[r])
			{
				ans += a[r];
			}
			l++;
			r--;
		}
		else
		{
			if(c[l] != c[r])
			{
				ans += a[r];
			}
			a[r] -= a[l];
			l++;
		}
	}
    cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
