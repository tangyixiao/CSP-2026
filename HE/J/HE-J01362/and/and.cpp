#include<bits/stdc++.h>
using namespace std;
int a[200005];
int dp[200005][200005];
int main(){
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	
	//输出数组
	//for(int i=0;i<n;i++) cout<<a[i]<<' '; cout<<endl<<endl;
	
    for(int i=0;i<n;i++){
    	dp[0][i]=a[i];
	}
	for(int i=0;i<m;i++){
		dp[i][0]=a[0];
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			dp[i][j]=max(dp[i][j-1],dp[i-1][j]&dp[i-1][j-1]);
		}
	}
	
	// 输出数组 
	//for(int i=0;i<m;i++){for(int j=0;j<n;j++){cout<<dp[i][j]<<' ';}cout<<endl;}
	//
	
	cout<<dp[m-1][n-1];
	return 0;
}
