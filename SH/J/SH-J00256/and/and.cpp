#include <bits/stdc++.h>
#define N 10005
using namespace std;

int n,m; // n: a.length  m:choose m of nums
int a[N*100]; // from 0 to n-1
int dp[N][N];
long long dfs(int depth,int chosen){
	if(n<=depth) return -1;
    if(chosen == m-1){
    	long long chose = a[depth];
    	long long notchose = dfs(depth+1,chosen);
		long long ret = max(chose,notchose);
		dp[depth][chosen] = ret;
    	return ret;
	};
	if(dp[depth][chosen] >= 0) return dp[depth][chosen];
	if(n-depth == m-chosen){
    	long long ret = a[depth] & dfs(depth+1,chosen+1);
    	dp[depth][chosen] = ret;
        return ret;
    }
    long long chose = a[depth] & dfs(depth+1,chosen+1);
    long long notchose = dfs(depth+1,chosen);
	long long ret = max(chose,notchose);
	dp[depth][chosen] = ret;
    return ret;
}
int main(void){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i = 0;i < n;i++) cin >> a[i];
    memset(dp,-1,sizeof(dp));
    cout << dfs(0,0);
    return 0;
}
