#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[200010];
int dp[100010];
int n,m;
int su1(){
	int ans;
	cin>>ans;
	for(int i=2;i<=n;i++){
		int x;
		cin>>x;
		ans=ans & x;
	}
	return ans;
}
int su2(){
	int ans;
	for(int i=2;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,a[i]&a[j]);
		}
	}
	return ans;
}
int su3(){
	dp[0]=pow(2,30)-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=-1;
	}
	for(int i=1;i<=m;i++){
		for(int j=m;j<=n;j++){
			if(dp[i]!=-1){
				dp[i]=max(dp[i],dp[i-1] & a[j]);
			}else{
				dp[i]=dp[i-1] & a[j];
			}
		}
	}
	return dp[m];
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n){
		cout<<su1();
	}else if(m==2){
		cout<<su2();
	}else{
		cout<<su3();
	}
	return 0;
}
