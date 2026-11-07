#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int n,m;
long long a[200001];
long long dp[200001];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i]=a[i];
		dp[i]=max(dp[i],dp[i-1]&a[i]);
	}
	cout<<dp[n]<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
