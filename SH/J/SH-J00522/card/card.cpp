#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N=3e5+7;
int n,m;
bool vis[N],cnt[N];

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		vector<int> q(n+1);
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++)
		{
			q.push_back(a[j]);
			cerr<<q.empty();
			vis[a[j]]=1;
			if(vis[a[j+1]])
			{
				q.clear();
			}
		}
		for(int k=1;k<=q.size();k++)
		{
			cnt[q[k]]++;
		}
	}
	for(int i=1;i<=n;i++) cout<<cnt[i]<<' ';
	return 0;
}
