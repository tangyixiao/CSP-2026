#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],dp[200005],ans,t;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=m-1;i<n;i++){
		int pos=i-m+1;
		t=a[pos];
		for(int j=pos+1;j<=i;j++)
			t&=a[j];
		dp[i]=max(dp[i],t);
	}
	for(int i=0;i<n;i++){
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}
