#include<bits/stdc++.h>
using namespace std;
int num[200001];
int ans;
int dp[200001][200001];
bool flag = false
int main(){
	freopen("and.in",stdin);
	freopen("and.out",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<+n;i++){
		cin>>num[i];
	}
	sort(num+1,num+n+1);
	if(m==1){
		cout<<num[n];
		flag = true;
	}else if(m==n){
		ans = num[1];
		for(int i = 2;i<=n;i++){
			ans&=num[i];
		}
		cout<<ans;
		flag = true;
	}else if(m==2){
		for(int i = 1;i<n;i++){
			for(int j = i+1;j<=n;j++){
				if((num[i]&num[j])>=ans){
					ans = (num[i]&num[j]);
				}
			}
		}
		cout<<ans;
		flag = true;
	}
	if(!flag){
		dp[1][1] = num[1];
		for(int i = 1;i<=m;i++){
			dp[n][1] = num[n];
		}
		for(int i = 2;i<=n;i++){
			for(int j = 2;j<=i;j++){
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]&num[j]); 
			}
		}
		cout<<dp[n][m];
	}
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
