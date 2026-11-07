#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int n,m;
ll a[N],cnt[N],ans,st;
bool cmp(ll x,ll y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<=31;j++)
		{
			if(a[i]&(1ll<<j))
			{
				cnt[j]++;
			}
		}
	}
	for(int i=31;i>=0;i--)
	{
		if(cnt[i]>=m)
		{
			st=(1<<(i+1));
			break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		a[i]=a[i]%st;
	}
	sort(a+1,a+1+n,cmp);
	ans=(1ll<<32)-1;
	for(int i=1;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}