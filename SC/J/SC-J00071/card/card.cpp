#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=5e5+10,M=3e5+10;

ll n,m;
ll a[N],cnt[M];
ll st[N],r;
bool vis[M];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int j=1;j<=n;j++)
	{
		r=0;
		for(int i=1;i<=m;i++) vis[i]=0;
		for(int i=j;i<=n;i++)
		{
			if(vis[a[i]])
			{
				while(st[r]!=a[i])
				{
					vis[st[r]]=0;
					r--;
				}
				r--;
			}
			st[++r]=a[i];
			vis[a[i]]=1;
		}
		for(int i=1;i<=m;i++) cnt[i]+=vis[i];
	}
	for(int i=1;i<=m;i++) cout << cnt[i] << " ";
	return 0;
}