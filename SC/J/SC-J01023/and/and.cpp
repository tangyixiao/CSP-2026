#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int dp[MAXN],a[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dp[0]=pow(2,30)-1;
	for(int i=1;i<=n;i++){
		for(int j=min(m,i);j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
	return 0; 
}