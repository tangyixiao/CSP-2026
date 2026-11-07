#include<bits/stdc++.h>
using namespace std;
#define rep(i,l,r) for(int i=(l);i<=(r);i++)
#define req(i,r,l) for(int i=(r);i>=(l);i--)
const int N=5e5+5,M=3e5+5,MOD=1145141,INF=1e9+1;
int n,m,a[N],tong[M],vis[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	rep(i,1,n)
	{
		cin>>a[i];
	}
	rep(i,1,n)
	{
		rep(j,1,n)
		{
			vis[a[j]]=0;
		}
		rep(j,i,n)
		{
			if(vis[a[j]]==0)
			{
				vis[a[j]]=j;
			}
			else
			{
				rep(k,vis[a[j]],j-1)
				{
					vis[a[k]]=0;
				}
				vis[a[j]]=j;
			}
		}
		rep(j,1,m)
		{
			if(vis[j]!=0)
			{
				tong[j]++;
			}
		}
	}
	rep(i,1,m)
	{
		if(i!=m)
		{
			cout<<tong[i]<<" ";
		}
		else
		{
			cout<<tong[i];
		}
	}
	return 0;
}
