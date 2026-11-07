#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int dp[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n>>m;
	dp[0]=(1<<32)-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int V=m;V>=1;V--){
			dp[V]=max(dp[V],dp[V-1]&a[i]);
		}
	}cout<<dp[m];
	return 0;
}