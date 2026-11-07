#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],dp[200010];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1]=a[1];
	for(int i=1;i<=n;i++){
		if(i<=m){
			for(int j=1;j<=i;j++){
				dp[i]=max(dp[i],(dp[j]+dp[i]-dp[j-1])&a[i]);
			} 
		}
		else{
			for(int j=1;j<=i;j++){
				dp[i]=max(dp[i],(dp[j-1]+dp[i]-dp[j])&a[i]);
			}
		}
	}
	cout<<dp[n];
	return 0;
}