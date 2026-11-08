#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll a[200010],b[200010];
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,all = 0,ans1 = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		b[i] = a[i];
		all += a[i];
	}
	ll j = n,i = 1;
	for(;i <= n;i++)
	{
		ll need = a[i];
		while(true)
		{
			if(c[j] != c[i]) ans1 += min(need,a[j]);
			if(a[j] >= need)
			{
				a[j] -= need;
				break;
			}
			
			need -= a[j];
			a[j] = 0;
			j--;
		}
		a[i] = 0;
	}
	i = n,j = 1;
	ll ans2 = 0;
	for(;i >= 1;i--)
	{
		ll need = b[i];
		while(true)
		{
			if(c[j] != c[i]) ans2 += min(need,b[j]);
			if(b[j] >= need)
			{
				b[j] -= need;
				break;
			}
			
			need -= b[j];
			b[j] = 0;
			j++;
		}
		b[i] = 0;
	}
	cout << min(ans1,ans2);
	return 0;
}
