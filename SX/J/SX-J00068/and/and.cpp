#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
int n,dp[N][32],a[N],m,ans,f,p,y;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=30;j++){
			if(a[i]==pow(j,2)-1) f++;
		}
	}
	if(f==n) {
		sort(a+1,a+n+1);
		ans=a[n];
		m--;
		for(int i=n-1;i>=1;i--){
			if(m<=0) break;
			m--;
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return 0;
}