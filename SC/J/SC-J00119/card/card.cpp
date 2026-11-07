//该代码时间复杂度为O(N^3),可得分：40
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 5e5+520;
ll n,m;
ll a[N];
ll ans[N];
ll cnt[N];
ll pos[N];
ll ml[N];
bool v[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	bool xingzhi_A =true;
	for(int i = 1; i<=n;i++)
	{
		cin >> a[i];
		if(a[i] > a[i-1])
		{
			xingzhi_A = false;
		}
	}
	if(m == 1) 
	{
		cout<<n;
		return 0;
	}
	else if(m == 2)
	{
		for(int i = 1; i<=n;i++) cnt[a[i]]++;
		ans[a[n]] = n;
		if(a[n] == 1) ans[2] = cnt[2];
		else ans[1] = cnt[1];
		cout<<ans[1] <<" "<<ans[2];
		return 0;
	}
	if(xingzhi_A&& n <= 5e3+59)
	{
		for(int i = 1; i <= n ;i++)
		{
			fill_n(cnt,n+52,0);
			fill_n(v,n+52,false);
			for(int j = i ; j<= n;j++)
			{
				if(v[a[j]])
				{
					continue;
				}
				cnt[a[j]]++;
				v[a[j]] = true;
				
			}
			for(int k = 1; k <= m ;k++)
			{
				if(cnt[k])
				{
					ans[k]++;
				}
			}
		}
		for(int k = 1; k <= m ;k++)
		{
			cout<<a[k]<<" ";
		}
		return 0;
	}
	else
	{
		for(int i = 1; i <= n ; i++)
		{
			fill_n(cnt,n+52,0);
			fill_n(pos,n+52,0);
			fill_n(ml,n+52,0);
			ll r = i-1;
			for(int j = i; j <= n;j++)
			{
				if(cnt[a[j]])
				{
					for(int k = pos[a[j]]; k <= r; k++)
					{
						cnt[ml[k]]--;
					}
					r = pos[a[j]]; 
					cnt[a[j]]++;
					ml[r] = a[j];
				}
				else
				{
					r++;
					pos[a[j]] = r;
					cnt[a[j]]++;
					ml[r] = a[j];
				}
			}
			for(int j = 1; j <= m;j++)
			{
				if(cnt[j])
				{
					ans[j]++;
				}
			}
		}
		for(int i = 1; i <= m;i++)
		{
			cout<<ans[i]<<" ";
		}
		return 0;
	}
		
} 