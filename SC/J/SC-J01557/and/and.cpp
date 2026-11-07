#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m,a[200005];
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+1+n,greater<ll>());
	ll ans = a[1];
	for(int i = 1;i <= m;i++)
	{
		if((a[i] & ans) == 0)
		{
			if(m + 1 <= n) m++;
			i++;
		}
		ans &= a[i];
	}
	cout << ans;
	return 0;
}