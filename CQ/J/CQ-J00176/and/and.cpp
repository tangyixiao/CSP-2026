#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],k,vis[200005],ans,flag,x,mx;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],mx=max(mx,a[i]);
	k=log2(mx);
	for(int i=k;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++)if((a[j]&(1<<i))&&!vis[j])cnt++;	
		if(cnt<m)continue;
		x=i;
		if(cnt==m)break;
		for(int j=1;j<=n;j++)if(!(a[j]&(1<<i)))vis[j]=1;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]&&(a[i]&(1<<x))){
			if(!flag)ans=a[i],flag=1;
			else ans&=a[i]; 
		}
	}
	cout<<ans;
	return 0;
}

