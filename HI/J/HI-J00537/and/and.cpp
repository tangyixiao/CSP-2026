#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	ll maxn;
	vector<ll>dp(n,0);
	vector<ll>a(m+1,0);
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	dp[0] = 0x3f3f3f3f3f3f3f3f;
	for(int i = 0;i<n;i++){
		for(int j = m+1;j>=0;j--){
			dp[j] = max(dp[j-1]&a[i],dp[j]);
		}
	}
	cout<<dp[m+1];
	return 0;
}
