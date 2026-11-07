#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5; 
int n,m;
int dp[N],a[N];
bool vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>dp[1]){
			dp[1]=a[i];
			vis[i]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!vis[i]){
				if(dp[j-1]&a[i]>dp[j]){
					vis[i]=1;
					dp[j]=dp[j-1]&a[i];
				}
			}
		}
	}
	cout<<dp[m];
	return 0;
} 
