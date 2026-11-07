#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int n,m,cnt=0,maxn=-2147483647;
int a[200010];
int dp[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	dp[1]=a[1];
	for(int i=2;i<=n;i++){
		if((dp[i-1]&a[i])>dp[i-1]){
			dp[i]=dp[i-1]&a[i];
			maxn=max(maxn,dp[i]);
			cnt++;
			if(cnt>=m) break;
		}
		else dp[i]=dp[i-1];
	}
	cout<<maxn;
	return 0;
}
