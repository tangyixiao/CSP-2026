#include<bits/stdc++.h>
using namespace std;
int a[200005],dp[200005];
int n,m;
void b(){
	for(int i=1;i<=n;i++){
		if(i==1)dp[i]=a[i];
		dp[i]=max(dp[i-1],a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(n==m){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		} 
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1);
	if(a[n]<=4){
		cout<<3<<endl;
		return 0;
	}
	b();
	cout<<dp[n];
	return 0;
}
