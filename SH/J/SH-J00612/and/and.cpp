#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long dp[N]; //dp[i]代表从第一项到第i项的最大按位与值
//i是目前的选择数 

long long n,m;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	dp[0]=pow(2,31)-1;
	
	for(long long i=1;i<=n;i++){
		for(long long j=m;j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	
	//cout << a[87] << " " << a[88];
	cout << dp[m];
}
