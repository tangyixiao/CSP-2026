#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[200050],a[200050],n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		dp[0] = a[i];
		for(int j = i;j >= 1;j--){
			dp[j] = max(dp[j],dp[j- 1] & a[i]);
		}
	}
	cout << dp[m];
	return 0;
}
