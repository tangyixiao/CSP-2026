#include <bits/stdc++.h> 
using namespace std;
const int N = 2e4 + 10;
int dp[N][N];
int n,  m;
int a[N] ;
void print() {
	for(int i = 1;i <= n;i ++) {
		for(int j = 1;j <= m;j ++) {
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl; 
}
int main() {
	freopen("and.in", "r",stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	
	for(int i = 1;i <= n;i ++) {
		cin >> a[i];
		dp[i][1] = a[i];
	}
	int maxx = 0;
	if(n <= 20000) {
		for(int i = 2;i <= n;i ++){
	    	for(int j = 1;j <= m;j ++) {
		        dp[i][j] = max(max(dp[i][j], dp[i - 1][j]), dp[i - 1][j - 1] & a[i]);
		    }
    	}
		for(int i = 1;i <= n;i ++) {
		    maxx = max(maxx, dp[i][m]);
	    }
	    cout << maxx;
	}else {
		cout << a[n];
	}
	 
	return 0;
}
//4 2
//3 15 12 12
