#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],dp[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		dp[i]=a[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=m;j>1;--j){
			dp[j]=max(dp[j],(dp[j-1]&a[i]));
		} 
	}
	cout<<dp[n];
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 