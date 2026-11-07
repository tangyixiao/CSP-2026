#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll read()
{
	ll x = 0 , f = 1;
	char ch = getchar();
	while(ch > '9' || ch < '0')
	{
		if(ch == '-') f = -f;
		ch = getchar();
	}
	while(ch <= '9' && ch >= '0')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
const int N = 2e5 + 10;
ll num[N];
ll ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ll n = read() , m = read();
	for(int i = 1 ; i <= n ; i ++ )
	{
		num[i] = read();
		if(m == 1) 
		{
			ans = max( ans , num[i] );
			continue;
		}
		if(m == n)
		{
			if(i == 1) ans = num[i];
			else ans = ans & num[i];
			continue;
		}
		if(i == 1) continue;
		if(m == 2)
		{
			ll r = i;
			for(int l = r - 1 ; l >= 1 ; l -- )
			{
				ll now = num[r] & num[l];
				ans = max( now , ans );
			}
			continue;
		}
	}
	
	if(m == 1)
	{
		cout << ans ;
		return 0;
	}
	
	if(m == n)
	{
		cout << ans ; 
		return 0;
	}
	
	if(m == 2)
	{
		cout << ans ;
		return 0;
	}
	
	cout << 0 ; 
	
	return 0;
}
