#include<bits/stdc++.h>
using namespace std;
int n,k;
const int N =2*1e5+7;
int a[N],dp[2000][2000];
void d(){
	int x=0;
	for(int i =1;i<=n;i++)x=max(x,a[i]);
	cout<<x;
}
void g(){
	int ans=0 ;
	for(int i =1;i<=n;i++){
		for(int j =1;j<=n;j++){
			if(i==j)continue;
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	int fk=0;
	for(int i =1;i<=n;i++){
		cin>>a[i];
		fk+=a[i];
	}
	if(k==1){
		d();
		return 0;
	}
	if(k==2){
		g();
		return 0;
	}
	memset(dp,-0x3f ,sizeof dp);
	dp[0][0]=a[1];
	dp[0][1]=a[1];
	int ans =0 ; 
	for(int i =1;i<=n;i++){
		for(int j =1;j<=n;++j){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[j]);
		}
	}
	for(int i =1;i<=n;i++){
		ans=max(ans,dp[i][k]);
	}
	cout<<ans;
	return 0 ;
}
