#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],sum,dao;char c[1000005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
	for (int i=1;i<=n;i++)cin >> a[i] >> c[i];
	dao=n;
	for (int i=1;i<=n;)
	{
		if (i>dao)
		{
			break;
		}
		if (c[i]!=c[dao])
		{
			if (a[i]>a[dao])
			{
				sum+=a[dao];
				a[i]-=a[dao];
				a[dao]=0;
				dao--;
			}
			else{
				sum+=a[i];
				a[dao]-=a[i];
				a[i]=0;
				i++;
			}
		}
		else{
			if (a[i]>a[dao])
			{
				a[i]-=a[dao];
				a[dao]=0;
				dao--;
			}
			else{
				a[dao]-=a[i];
				a[i]=0;
				i++;
			}
		}
	}
	cout << sum;
	return 0;
}
