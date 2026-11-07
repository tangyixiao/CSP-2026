#include<bits/stdc++.h>
using namespace std;
const int maxa=2e3+10;
int n,m;
int dp[maxa][maxa]; 
bool bts[32][3];
int a[maxa];
int adde(int v,int u){
	memset(bts,0,sizeof(bts));
	int k1=30,k2=30;
	int cek1,cek2;
	bool t1=0,t2=0;
	int ans;
	for(int i=k1;i>=0;i--){
		int cnt=2<<i;
		if(cnt>v)continue;
		if(t1==0){
			cek1=i;
			t1=1;
		}
		v-=cnt;
		bts[i][0]=1;
	} 
	for(int i=k2;i>=0;i--){
		int cnt=2<<i;
		if(cnt>u)continue;
		if(t2==0){
			cek2=i;
			t2=1;
		}
		u-=cnt;
		bts[i][1]=1;
	}
	int cnt=max(cek1,cek2);
	for(int i=cnt;i>=0;i--){
		bts[i][2]=bts[i][0]&bts[i][1];
	}
	for(int i=cnt;i>=0;i--){
		if(bts[i][2])ans+=2<<i;
	}
	return ans;
}
void DP(){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=max(dp[i][j-1],adde(dp[i-1][j],a[j]));
		}
	} 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	dp[0][1]=0;
	dp[1][0]=0;
	dp[0][0]=0;
	DP();
	cout<<dp[m][n];
	return 0;
}