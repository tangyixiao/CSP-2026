#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m,dp[N];
struct node{
	int val;
	bool operator<(const node& o){
		return val>o.val;
	}
}a[N]; 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i].val;
		if(flag){
			int o=0;
			for(int j=0;j<=21;j++){
				if((1<<j)-1==a[i].val) {
					o=1;
					break; 
				}
			}
			flag&=o;	
		}
	}
	if(flag){
		sort(a+1,a+n+1);
		int ans=a[1].val;
		for(int i=2;i<=m;i++){
			ans&=a[i].val;
		}
		cout<<ans<<'\n';
		return 0;
	}
	dp[0]=INT_MAX;
	for(int i=n;i>=1;i--){
		for(int j=min(m,i);j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i].val);
		}
	}
	cout<<dp[m]<<'\n';
	return 0;
}

