#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N];
int nxt[M],ans[M],head;
bool v[M];
int n,m;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie();
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(nxt,-1,sizeof nxt);
		memset(v,0,sizeof v);
		head=-1;
		int lt=-1;
		for(int j=i;j<=n;j++)
		{
			int u=a[j];
			if(!v[u])
			{
				if(head==-1)
				{
					head=u;
					lt=u;
				}
				else
				{
					nxt[lt]=u,nxt[u]=-1,lt=u;
				}
				v[u]=1;
			}
			else
			{
				if(lt==u) continue;
				for(int k=nxt[u];~k;k=nxt[k]) v[k]=0;
				nxt[u]=-1;
				lt=u;
			}
		}
		for(int k=head;~k;k=nxt[k]) ans[k]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}