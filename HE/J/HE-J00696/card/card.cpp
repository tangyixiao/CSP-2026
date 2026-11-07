//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],vis[M],ans[M],siz[N];
int main()
{
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i],vis[a[i]]=i,siz[i]=1;
	for(int i=1;i<=n;++i)siz[vis[a[i]]+1]+=siz[i];
	for(int i=1;i<=n;++i)ans[a[i]]+=siz[i];
	for(int i=1;i<=m;++i)cout<<ans[i]<<" ";
	return 0;
}//10:06:58 AC(AK) 
//11:27:33 AC(AK) 
