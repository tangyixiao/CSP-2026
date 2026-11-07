#include<bits/stdc++.h>
using namespace std;
const int N=2e3+10;
int n,m;
int a[N];
int dp[N][N]; //dp[i][j]表示前i个数选了j个的最大值 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxm=0,sum=a[1];
	for(int i=1;i<=n;++i){
		cin>>a[i];
		maxm=max(maxm,a[i]);
		if(i>1) sum=sum&a[i];
	}
	if(m==1){
		cout<<maxm;
		return 0;
	}
	if(m==2){
		maxm=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<i;++j){
				maxm=max(maxm,a[i]&a[j]);
			}
		}
		cout<<maxm;
		return 0;
	}
	if(m==n){
		cout<<sum;
		return 0;
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=i;++j){
			dp[i][j]=max(dp[i-1][j],(j-1==0)?a[i]:dp[i-1][j-1]&a[i]);
		}
	}
	cout<<dp[n][m];
	return 0;
}