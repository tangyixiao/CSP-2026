#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m,a[500005];
ll lst[300005],prv[500005],dp[500005];
ll ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		prv[i]=lst[a[i]];
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		dp[i]=dp[prv[i]]+1;
		if(lst[a[i-1]]==i-1){
			dp[i]+=dp[i-1];
		}
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]=dp[lst[a[i]]];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i<m) cout<<" "; 
	}
	cout<<"\n";
	return 0;
} 
