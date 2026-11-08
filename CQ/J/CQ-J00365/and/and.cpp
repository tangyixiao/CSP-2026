#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	if(m==1){
		cout<<0;
		return 0;
    }
    dp[1]=0;
    for(int i=1;i<n;i++){
    	for(int j=i+1;j<=n;j++){
    		dp[2]=a[i]&a[j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=3;j--){
			dp[j]=max(dp[j-1]&a[i],dp[j-2]&a[i]);
		}
	}
	cout<<dp[m];	
	return 0;
}
