#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

const int N = 500005;
ll a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	ll ans = -1;
	for (int i = 1;i <= n;i++)
	{
		int t = a[i];
		for (int j = 1;j <= m;j++)
		{
			t &= a[i+j]; 
		}
		if (t > ans)
			ans = t;
	}
	cout << ans;
	return 0;
}
