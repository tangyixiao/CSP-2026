#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],dp[100][200005];
int change(int num){
	if(num==1) return 0;
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int num=i%2,ch=change(num);
		dp[num][0]=a[i];
		for(int j=1;j<=m;j++){
			if(j<=i) dp[num][j]=max(dp[ch][j],dp[ch][j-1]&a[i]);
		}
	}
	cout<<dp[n%2][m];
	return 0;
}

