#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;

int n,m;
int a[maxn];
int ans=-1e9;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	if((long long)(n+1)*(m+1)>2e8){
		ans=a[n-1];
		for(int i=n-2;i>=n-m;i--)ans = ans&a[i];
		cout << ans;
		return 0;
	}int dp[n+1][m];
	dp[0][0]=dp[0][1]=0;
	for(int i=1;i<=n;i++){
		dp[i][0]=a[i-1];
		for(int j=1;j<m;j++){
			if(i==1) dp[0][j]=0;
			dp[i][j] = max((dp[i-1][j-1]&dp[i][0]),dp[i-1][j]);
		}
	}
	cout << dp[n][m-1];
	return 0;
}
//dp 发现数组不够大，硬算最大m个数按位与 