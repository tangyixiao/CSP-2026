#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MN = 2e5 + 20,INF = 2e30;
int n,m;
int a[MN];
int dp[20000][10000];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	if(m == n){
		for(int i = 2;i <= n;i++){
			a[1] &= a[i];
		}
		printf("%lld",a[n]);
		return 0;
	}
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a + 1,a + n + 1);
	for(int i = 0;i <= n;i++){
//		printf("%lld ",a[i]);
		dp[i][0] = INF;
		dp[i][1] = a[i];
	}
//	cout << endl;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - 1] & a[i]);
//			printf("%lld ",dp[i][j]);
		}
//		printf("\n");
	}
	printf("%lld",dp[n][m]);
	return 0;
}
