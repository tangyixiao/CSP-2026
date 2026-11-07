#include<bits/stdc++.h>
using namespace std;
int n , m;
int v[10000] , w[10000];
int dp[100000][1000];
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	int t = 1;
	for(int i = 1 ; i <= 20 ; i++){
		t *= 2;
	}
	t -= 1;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> v[i];
		w[i] = 1;
	}
	for(int i = 0 ; i <= n ; i++){
		dp[i][0] = t;
		dp[0][i] = 1;
	}
	dp[0][0] = t;
	dp[1][1] = v[1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= min(i , m) ; j++){
			if(i == 1 && j == 1){
				continue;
			}
			dp[i][j] = max(dp[i - 1][j] , dp[i - 1][j - w[i]] & v[i]);
		}
	}
	cout << dp[n][m] << endl;
	return 0;
} 
