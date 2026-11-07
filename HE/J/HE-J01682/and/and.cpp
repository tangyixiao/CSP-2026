#include <iostream>
using namespace std;
const int N=2e5+3;
long long n,m;
long long  dp[N],a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
    	dp[i]=a[i];
	}
	for(long long i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			dp[j]=max(dp[j],dp[j]&a[j-i+1]);
		}
	}
	cout<<dp[n];
	return 0;
}
