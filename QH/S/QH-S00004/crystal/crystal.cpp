#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000000001],dp[1000000001]; 
int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(long long i=2;i<=n;i++){
		long long num=0,t=0;
		for(long long j=i;j>=1;j--){
			num+=a[i]-a[j];
			if(num<=m){
				t++;
			}
		}
		dp[i]=t;
	}
	sort(dp+1,dp+n+1);
	cout<<dp[n];
	return 0;
}
