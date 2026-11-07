#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
ll n,m,x;
ll w[N],v[N],dp[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> v[i];
		w[i] = 1;
		x = max(x,v[i]);
	}
	dp[0] = 2e30;
	if( m == 2 ){
		ll maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if( i != j )  maxn = max(maxn,v[i]&v[j]);
			}
		}
		cout << maxn << endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>0;j--){
			if( j - w[i] >= 0 && dp[j-w[i]] ){
				//cout << dp[j] << " " << dp[j-w[i]] << " " << v[i] << " " << (dp[j-w[i]]&v[i]) << endl;
				dp[j] = max(dp[j],dp[j-w[i]]&v[i]);
				//cout << i << " " << j << " ";
				//cout << dp[j] << endl;
			}
		//	if( i == 1624 )  cout << j << " " << dp[j] << endl;
		}
	}
	cout << dp[m] << endl;
	
	return 0;
} 
