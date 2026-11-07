#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
#define ll long long
int dp[maxn],n,m,mat[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>mat[i];
	dp[0]=(1<<30)-1;
	for(ll i=1;i<=n;i++){
		for(ll j=i;j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&mat[i]);
		}
	}
	cout<<dp[m];


	fclose(stdin);
	fclose(stdout);
	return 0;
}
