#include<bits/stdc++.h>
using namespace std;
const int N=200005;
long long a[N];
long long dp[N];
int maxx(long long a,long long b){
	if(a>b) return a;
	else return b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long ans=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		dp[i]=dp[i-1];
		dp[i]=maxx(dp[i],a[i-1]&a[i]);
		ans=maxx(ans,dp[i]);
	}
	cout<<ans<<endl;
	return 0;
}
