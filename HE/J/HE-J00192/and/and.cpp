#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> A;
ll jj[1000000005];
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	ll n,m,a,ans = 0;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a;
		A.push_back(a);
	}
	if(m == 1){
		ll aa = 0;
		for(int i = 1;i<=n;i++){
			aa = max(aa,A[i-1]);
		}
		cout<<aa;
		return 0;
	}
	if(m == n){
		ll aa = A[0];
		for(int i = 2;i<=n;i++){
			aa = (aa)&(A[i-1]);
		}
		cout<<aa;
		return 0;
	}
	vector<ll>dp(A.size()+1,0);
	ll c = 1;
	for(int i = 1;i<=30;i++){
		c*=2;
		c++;
	}
	dp[0] = c;
	for(int i = 1;i<=n;i++){
		for(int j = m;j>=1;j--){
			if(j == 1){
				dp[j] = dp[j]+(ll)((A[j-1])&(dp[j-1]));
			}
			else{
				dp[j] = max(dp[j],dp[j]+(ll)((A[j-1])&(dp[j-1])));
				
				}
		}
	}
	cout<<dp[m];
	return 0;
} 
