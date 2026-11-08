#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
int a[MAXN];
int cnt[40];
int vis[MAXN];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<30;j++) if(a[i]&(1<<j)) cnt[j]++;
		vis[i]=1;
//		cout<<"i="<<i<<" a="<<bitset<4>(a[i])<<endl;
	}
//	cout<<"cnt:";
//	for(int i=0;i<=29;i++) cout<<cnt[i]<<" ";
//	cout<<endl;
	for(int j=29;j>=0;j--)
	{
		if(cnt[j]>=m)
		{
			for(int i=1;i<=n;i++)
			{
				if(!vis[i]) continue;
				if(!(a[i]&(1<<j)))
				{
					vis[i]=0;
					for(int k=0;k<=29;k++) if(a[i]&(1<<k)) cnt[k]--;
				}
			}
		}
	}
	int ans=(1<<30)-1;
	int tot=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i])
		{
//			cout<<"a="<<a[i]<<endl;
			ans&=a[i];
			tot++;
			if(tot==m) break;
		}
	}
	cout<<ans;
	return 0;
}

