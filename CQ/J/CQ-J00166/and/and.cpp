#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
void fast(){
	 ios::sync_with_stdio(0);
	 cin.tie(0),cout.tie(0);
	 return ;
}
ll a[N];
ll dp[5001][5001];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	fast();
ll n,m,mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	dp[0][0]=a[1];
	for(int i=1;i<=n;i++){
		dp[i][0]=a[i];
			for(int k=1;k<=m;k++){	
				for(int j=1;j<=i;j++){
				ll o=dp[j-1][k-1]&a[i];
				dp[i][k]=max(dp[i][k],o);
			} 
	}
	}
	ll ans=0;
	for(int i=1;i<=n;i++){
		ans=max(dp[i][m],ans);
		
	}cout<<ans;
	return 0;
} 

