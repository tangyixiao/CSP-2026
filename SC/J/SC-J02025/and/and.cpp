#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],ans=-1,vis[N];

void dfs(int pos,int cnt,long long sum){
//	cout<<" pos="<<pos<<" cnt="<<cnt<<" sum="<<sum<<'\n';
	
	if(cnt>=m) {
		ans=max(ans,sum);
//		cout<<" ans="<<ans<<'\n';
		return;
	}
	if(pos>n) return ;
	if(!vis[pos]){
		int t=sum&a[pos];
//		cout<<" t="<<t<<'\n';
		vis[pos]=1;
		dfs(pos+1,cnt+1,t);
		vis[pos]=0;
	}
	dfs(pos+1,cnt,sum);
	return;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(1,1,a[i]);
		}
	}
	
	cout<<ans<<'\n';
	return 0; 
}