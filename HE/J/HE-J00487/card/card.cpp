#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2*1e5+5;
int a[N];
int vis[N];
int ans[N];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int len=0;
		vector<int> q(n+5);
		for(int j=1;j<=n;j++) vis[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(vis[j]==0)
			{
				q.push_back(a[j]);
				vis[j]=1;
			}
			else
			{
				for(int k=1;k<=n;k++) 
				{
					if(q[k]==a[j])
					{
						for(int p=k;p<=n;p++) 
						{
							q.pop_back();
						}
						q.push_back(a[j]);
					}
				}
			}
		}
		int sz=q.size();
		for(int j=0;j<sz;j++)
		{
			int l=q.back();
			
			q.pop_back();
			bool f[N];
			for(int k=1;k<=sz;k++) f[k]=false;
			for(int p=1;p<=m;p++)
			{
				if(l==p&&f[p]==false)
				{
					//ans[p]++;
					f[p]=true;
				 } 
			}
			for(int p=1;p<=m;p++) ans[p]+=f[p];
		}
	}
//	q.push_back(1);
for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
