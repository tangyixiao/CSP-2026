//优先考虑骗分、、60分 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3e5;
ll a[N];
ll n,m;
ll cnt_wei[40];//0的个数 
ll max_wei = 0;
ll shanchu(ll x)
{
	ll ls_cnt[40];
	for(int i = 0; i <= max_wei;i++)
	{
		ls_cnt[i] = cnt_wei[i];
	}
	for(int i = 0; i <= max_wei;i++)
	{
		if(!(x&(1<<i)))
		{
			ls_cnt[i]--;
		}
	}
	
	ll ans = 0;
	for(int i = 0; i <= max_wei;i++)
	{
		if(ls_cnt[i] == 0)//没有0全是1，就加上； 
		{
			ans += 1<<i;
		}
	}
	return ans;
}
ll cja(ll x)
{
	ll ans = 0;
	while(x)
	{
		if(x&1) 
		{
			ans++;
		}
		x>>=1;
	}
	return ans;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n ;i++)
	{
		cin >> a[i];
	}
	if( m == 1)
	{
		ll ans = -1;
		for(int i = 1; i <= n ;i++)
		{
			ans = max(a[i],ans);
		}
		cout<<ans;
		return 0;
	}
	if(m == n)
	{
		ll ans = a[1];
		for(int i = 2; i <= n ;i++)
		{
			ans = a[i]&ans;
		}
		cout<<ans;
		return 0;
	}
	if( n <= 20)
	{
		ll ans =-1; 
		for(int i = 1; i <= (1<<n)-1;i++)
		{
			ll weishu = cja(i);
			if(weishu == m)
			{
				ll ls = 0;
				for(int j = 0; j < n ;j++)
				{
					if(i & (1<<j))
					{
						if(ls)
						{
							ls = ls&a[j+1];
						} 
						else ls = a[j+1];
					}
				}
				ans = max(ans,ls);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m == 2&&n*n <= (ll)1e8)
	{
		ll ans = 0;
		for(int i = 1; i <= n ; i++)
		{
			for(int j = i+1;j<=n;j++)
			{
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m== n-1)
	{
		ll ans = 0;
		for(int i = 1; i <= n ; i++) 
		{
			ll k = a[i];
			ll op = 0;
			while(k)
			{
				k >>= 1;
				op++;
			}
			max_wei = max(max_wei,op-1);
		}
		for(int i = 1; i <= n ; i++) 
		{
			ll k = a[i];
			for(int j = 0; j <= max_wei;j++)
			{
				if(!(k&(1<<j)))
				{
					cnt_wei[j]++;
				}
			}
		}

		for(int i = 1;i <= n ;i++)
		{
			ans = max(ans,shanchu(a[i]));
		}
		cout<<ans;
		return 0; 
	}
	return 0;
	
}