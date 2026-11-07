//9:19
#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N=200010;
int n,m,ans=-100;
long long mx=-1000;
long long a[N];

void dfs(int aq,long long b,vector<int> vis){
	if(aq==0){
		ans=max(ans,b);
		return;
	}
	for(long long i=1;i<=n;i++){
		if(aq==m){
			aq--;
			b=a[i];
			vis[i]=1;
			dfs(aq,b,vis);
			vis[i]=0;
			aq++;
		}
		else{
			if(vis[i]) continue;
			else{
				aq--;
				long long q=b;
				q&=a[i];
				vis[i]=1;
				dfs(aq,q,vis);
				vis[i]=0;
				aq++;
			}
		} 
	}
	return;
}

signed main(){
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		int ans1=a[1];
		for(int i=1;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	} 
	vector<long long> vis(N);
	vis.assign(n+1,0);
	dfs(m,0,vis);
	cout<<ans;
	return 0;
} 
