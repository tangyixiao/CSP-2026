#include<bits/stdc++.h>
using namespace std;
const int N =2e5+10;
long long a[N];
int n,m;
long long dp[N];
int b[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
//	for(int i=1;i<=n;i++){
//		int sum=0;
//		while(a[i]!=0){
//			sum++;
//			a[i]-=(a[i]&(-a[i]));
//		}
//		b[i]=sum;
//	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				dp[j]=max(dp[j]&dp[k],dp[j]);
			}
		}
	}
	cout<<dp[n];
	return 0;
}

