#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[114514*2], ans;
bool b[114514*2], temp[114514*2];
int main ()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//saved
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = 1;
	}
	for (ll mask = 1ll<<40, k = 40; k >= 0; k--, mask/=2)
	{
		ll cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (b[i] & (a[i]>>k) & 1)
			{
				cnt++;
				temp[i] = 1;
			}
			else temp[i] = 0;
		}
		if (cnt >= m)
		{
			for (int i = 0; i < n; i++) b[i] &= temp[i];
			ans += mask;
		}
	}
	cout << ans << endl;
	return 0;
}
