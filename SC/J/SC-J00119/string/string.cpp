#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3e5;
ll n;
ll a[N];
char c[N];
ll ans = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n ;
	ll zs = 0;
	for(int i = 1; i <= n ; i++)
	{
		cin >> a[i] >> c[i];
		zs +=a[i];
	}
	ll l = 1,r = n;
	ll yichuli = 0;
	while(yichuli/2 <= zs)
	{
		if(l == r)
		{
			yichuli += a[l]/2;
			a[l] = 0;
			break;
		}
		if(c[l] != c[r])
		{
			if(a[l] >= a[r])
			{
				ans += a[r];
				yichuli += a[r];
				a[l]-= a[r];
				a[r] = 0;
				
			}
			else
			{
				ans += a[l];
				yichuli += a[l];
				a[r]-=a[l];
				a[l] = 0;
			}
		}
		else
		{
			yichuli += min(a[l],a[r]);
			ll al = a[l],ar = a[r];
			a[l] -= min(al,ar);
			a[r] -= min(al,ar);
			
		}
		if(a[l] == 0) l++;
		if(a[r] == 0) r--;
	}
	cout<<ans;

	return 0;
}