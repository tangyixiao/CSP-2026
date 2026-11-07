#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1000005],dp[200005][1005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int s=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1) s+=a[i];
		else s&=a[i];
		dp[i][1]=a[i];
	}
	if(m==n){
		cout<<s<<'\n';
		return 0;
	}
	int maxx=0;
	for(int i=2;i<=m;i++){
		for(int j=n;j>=1;j--){
			for(int k=1;k<j;k++){
				dp[j][i]=max(dp[j][i],dp[k][i-1]&a[j]);
				maxx=max(maxx,dp[j][i]);
			}
		}
	}
	cout<<maxx<<'\n';
	return 0;
}