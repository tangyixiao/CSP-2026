#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m;
ll a[200001];
ll dp[200001];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for(ll i = 1;i <= n;i ++){
		cin >> a[i];
	}
	for(ll i = 1;i <= n;i ++){
		for(ll j = m;j >= 1;j --){
			if(j == 1){
				dp[j] = max(dp[j],a[i]);
			}
			dp[j] = max(dp[j],dp[j - 1] & a[i]);
		}
	}
	cout << dp[m] << endl;
	return 0;
}