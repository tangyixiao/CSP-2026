#include<iostream>
using namespace std;
int n;
long long w,sj[500005];
int dp[500005],hhh=0;

int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
cin>>n>>w;
for(int i=1;i<=n;i++){
	dp[i]=1;
	cin>>sj[i];
}
for(int i=n;i>1;i--){
	long long sum=0;
	for(int j=i-1;j>=1&&sum<=w;j--){
		long long cnt=sj[i]-sj[j];
		if(sum+cnt<=w){
			sum+=cnt;
			dp[i]+=1;
		}
	}
	hhh=max(hhh,dp[i]);
	}
cout<<hhh;
return 0;
}
