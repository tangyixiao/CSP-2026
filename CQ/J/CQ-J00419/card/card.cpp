#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+10;
int a[MAXN];
int seq[MAXN];//this pos's seq ->back
int cnt[300010];
int ans[300010];
int n,m;

int vis[MAXN];
int p[MAXN];
vector<int> wt[MAXN];
int se[MAXN];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)//<-
	{
		if(cnt[a[i]]) seq[i]=cnt[a[i]],vis[i]=1;
		cnt[a[i]]=i;
	}
	memset(cnt,0,sizeof(cnt));
	for(int i=n;i>=1;i--)//->
	{
		if(cnt[a[i]]) se[i]=cnt[a[i]];
		cnt[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(seq[j]<=i && seq[j]!=0)
			{
				p[i]=j;
//				cout<<"i="<<i<<" p="<<p[i]<<" s="<<seq[j]<<endl;
				break;
			}
		}
	}
	for(int i=n;i>=1;i--)
	{
		int pos=0;
		for(int j=i;j>=1;j--)
		{
			if(se[j]<=p[j] && se[j]>i && p[j]<=i)
			{
				pos=j;
				break;
			}
		}
//		cout<<"i="<<i<<" pos="<<pos<<endl;
		ans[a[i]]+=i-pos;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

