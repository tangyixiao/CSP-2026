#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and1.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[200000];
	for(int i=1;i<=n;i++)cin>>a[i];
	
	int dp[200000];
	for(int i=0;i<=m;i++)dp[i]=1;
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[j],a[i]&dp[j-1]);
		}
	}
	cout<<dp[m];
	return 0;
}