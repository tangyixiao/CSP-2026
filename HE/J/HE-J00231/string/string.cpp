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
	while(ch >= '0' && ch <= '9')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
const int N = 2e5 + 10;
ll a[N];
char c[N];
ll ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ll n = read();
	for(int i = 1 ; i <= n ; i ++ )
	{
		a[i] = read();
		cin >> c[i];
	}
	int l = 1 , r = n;
	while(l < r)
	{
		ll k = min( a[l] , a[r] );
		if(c[l] == c[r])
		{
			a[l] -= k , a[r] -= k;
			if(a[l] == 0) l ++ ;
			if(a[r] == 0) r -- ;
		}
		else
		{
			ans += k;
			a[l] -= k , a[r] -= k;
			if(a[l] == 0) l ++ ;
			if(a[r] == 0) r -- ;
		}
	}
	
	cout << ans;
	
	return 0;
}
