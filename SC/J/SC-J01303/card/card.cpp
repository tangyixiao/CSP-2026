#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N];
int ans[N];
bool vis[N];
signed main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(false);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		cout<<n;
		return 0;
	}else if(m==2){
		int cnt1=0;
		for(int i=1;i<=n;i++) cnt1+=(a[i]==1);
		if(a[n]==1) cout<<n<<' '<<n-cnt1<<' ';
		else cout<<cnt1<<' '<<n<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) vis[j]=0;
		deque<int> q;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(!q.empty() && q.back()!=a[j]) vis[q.back()]=0,q.pop_back();
			}else q.push_back(a[j]),vis[a[j]]=1;
		}
		for(int j=1;j<=m;j++) ans[j]+=vis[j];
//		cout<<vis[2]<<'\n';
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
