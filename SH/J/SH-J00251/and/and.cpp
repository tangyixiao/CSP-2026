#include<bits/stdc++.h>
using namespace std;
int a[200050];
int dp[200050];
int n,m;
void bin(){
	for(int i=1;i<=n;i++){
		if(i==1)dp[i]=a[i];
		dp[i]=max(dp[i-1]&a[i],a[i]);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	bin();
	cout<<dp[n];
	return 0;
}
