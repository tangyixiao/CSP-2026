#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5000000];
int dp[5000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	dp[0]=pow(2,31)-1;
	for(int i=1;i<=n;++i){
		for(int j=m;j>0;--j){
			dp[j]=max(dp[j],(dp[j-1]&a[i]));
		}
//		for(int j=1;j<=m;++j){
//			cout<<setw(10)<<dp[j];
//		}
//		cout<<endl;
	}
	cout<<dp[m];
	return 0;
}
/*
8 2
1 19 6 8 13 0 13 7 
*/
