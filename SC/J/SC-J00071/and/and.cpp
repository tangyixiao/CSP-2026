#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10,L=30;

ll n,m;
ll a[N];
ll cnt,sum,ans;
bool vis[N];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	cnt=n;
	for(int j=L;j>=0;j--)
	{
		if(cnt<m) break;
		sum=0;
		for(int i=1;i<=n;i++)
		{
			if(vis[i]) continue;
			if((a[i]>>j)&1) sum++;
		}
		if(sum<m) continue;
		ans+=(1ll<<j);
		for(int i=1;i<=n;i++)
		{
			if(vis[i]) continue;
			if(!((a[i]>>j)&1))
			{
				vis[i]=1;
				cnt--;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}