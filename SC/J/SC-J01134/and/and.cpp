#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
ll n,m,ans,A[N],dp[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>A[i];
	sort(A,A+n);
	if(m==1){
		cout<<A[n-1];
		return 0;
	}
	if(m==n){
		for(int i=0;i<n;i++) ans&=A[i];
		cout<<ans;
		return 0;
	}
	dp[0]=A[1];
	for(int i=1;i<=n;i++){
		for(int j=A[i];j>0;j--){
			dp[j]=max(dp[j],dp[i-1]&A[i]);
		}
	}
	cout<<dp[m];
	return 0;
}