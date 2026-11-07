#include<bits/stdc++.h>
using namespace std;
long long x[200005];
long long dp[200005];
const int mod=1073741823;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int z;
    int n,m;
    long long ans;
    cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			long long x;
			cin>>x;
			ans=max(ans,x);
		}
		cout<<ans;
		return 0; 
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			long long x;
			cin>>x;
			ans=ans&x;
		}
		cout<<ans;
		return 0; 
	}
    for(int i=1;i<=n;i++){
	    cin>>x[i];
	    if(x[i]&mod>dp[1]){
	    	z=i;
	        dp[1]=x[i];
		}
	}
	x[z]=0;
	for(int j=2;j<=m;j++){
		x[z]=0;
		z=0;
		for(int i=1;i<=n;i++){
			if(dp[j-1]&x[i]>dp[j]){
				z=i;
			}
			dp[j]=max(dp[j],(dp[j-1]&x[i]));
		}
	}
	cout<<dp[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
