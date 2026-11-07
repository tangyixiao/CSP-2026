#include<bits/stdc++.h>
using namespace std;
const int SIZE=2e5+10;
int a[SIZE],n,m,dp[SIZE];
int main(){
	freopen("and.in" , "r" , stdin);
    freopen("and.out" , "w" , stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		dp[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=i;j--){
			if(dp[j]!=a[j]){
				dp[j]=max(dp[j],dp[j-i]&a[j]);
			}else{
				dp[j]=dp[j-i]&a[j];
			}
		}
	}
	cout<<dp[n];
	return 0;
} 
