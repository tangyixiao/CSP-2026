#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],dp[200005],k;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(dp[1]<=a[i]) dp[1]=a[i],k=i;	
	}
	for(int i=1;i<=n;i++)
		for(int j=m;j>=1;j--)
			if(i!=k) dp[j]=max(dp[j],(dp[j-1]&a[i]));
	cout<<dp[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
