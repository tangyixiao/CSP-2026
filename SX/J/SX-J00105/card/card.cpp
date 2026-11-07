#include <bits/stdc++.h>
#define ll long long
using namespace std;
//priority_queue<ll> pq;
//priority_queue<ll,vector<ll>,greater<ll> > pq; //Ð¡¸ù¶Ñ
const int N=5e5+5,M=3e5+5;
ll n,m,a[N],ans[M],wz[M],vis[M],sl[M];
bool tpa=true,tpb=true;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];sl[a[i]]++;
		if(i!=n&&a[i]<=a[i+1])
		tpa=0;
	}
	if(tpa==1)
	{
		ll ljq=0;
		for(int i=1;i<=m;i++)
		{
			ljq+=sl[i];
			cout<<ljq<<" ";
		}
		return 0;
	}
	else if(tpb==1)
	{
		ll ljq=0;
		for(int i=1;i<=n;i++)
		{
			ljq+=sl[a[i]];
			ans[i]=ljq;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<ans[i];
		}
		return 0;
	}
//	for(int i=1;i<=n;i++)
//	{
//		if(vis[a[i]]==0)
//		{
//			vis[a[i]]=1;
//			wz[a[i]]=i;
//		}
//		else if(vis[a[i]]==1)
//		{
//			for(int j=wz[a[i]];j<i;j++)
//			{
//				vis[a[j]]=0;
//			}
//			wz[a[i]]=i;
//		}
//		for(int j=1;j<=m;j++)
//		{
//			ans[i]+=vis[i];
//		}
//		cout<<a[i]<<'\n'<<"vis ";
//		for(int j=1;j<=m;j++)
//			cout<<vis[i]<<" ";
//		cout<<'\n';
//		cout<<"wz ";
//		for(int j=1;j<=m;j++)
//			cout<<wz[i]<<" ";
//		cout<<'\n';
//		cout<<"ans ";
//		for(int j=1;j<=m;j++)
//			cout<<ans[i]<<" ";
//		cout<<'\n'<<'\n';
//	}
//	for(int i=1;i<=m;i++)
//	{
//		cout<<ans[i]<<" ";
//	}
	return 0;
}