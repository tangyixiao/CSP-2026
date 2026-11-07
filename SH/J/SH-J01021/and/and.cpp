#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[300005],ans = -1;
bool flag[300005];
void ejc(long long now,long long cnt)
{
	if(now == n + 1)
	{
		
		if(cnt == m)
		{
			long long cntt,pos;
			for(int i = 1;i <= now;i++)
			{
				if(flag[i] == 1)
				{
					pos = i;
					cntt = a[i];
					break;
				}
			}
			for(int i = pos + 1;i <= now;i++)
			{
				if(flag[i] == 1) cntt = cntt & a[i];
			}
			ans = max(ans,cntt);
		}
	}
	else 
	{
		flag[now] = 1;
		ejc(now + 1,cnt + 1);
		flag[now] = 0;
		ejc(now + 1,cnt);
	}
}
bool cmp(long long a,long long b)
{
	return a > b; 
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i];
	if(n <= 20)
	{
		ejc(1,0);
		cout<<ans<<endl;
	}
	else if(n <= 2000)
	{
		if(m == 1)
		{
			for(int i = 1;i <= n;i++) ans = max(ans,a[i]);
		}
		else if(m == 2)
		{
			for(int i = 1;i <= n - 1;i++)
			{
				for(int j = i + 1;j <= n;j++)
				{
					ans = max(ans,a[i] & a[j]);
				}
			}
		}
		else 
		{
			long long cnt = a[1];
			for(int i = 2;i <= n;i++) cnt = cnt & a[i];
			ans = cnt;
		}
		cout<<ans<<endl;
	}
	else 
	{
		sort(a + 1,a + n + 1,cmp);
		ans = a[m];
		cout<<ans<<endl;
	}
	return 0;
}
