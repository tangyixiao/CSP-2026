#include<bits/stdc++.h>
using namespace std;
long long m, n, ans;
int a[200005], dp[200005];
int main(){
	freopen("and.in","r", stdin);
    freopen("and.out","w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i++){
    	dp[i] = a[i];
	}
	for(int i = 1; i <= m - 1; i++){
    	for(int j = n; j>= i; j--){
    		dp[j] = dp[j] & dp[j - 1];
		}
	}
	cout << dp[n];
    return 0;
}