#include<bits/stdc++.h>
using namespace std;
const int N=200050;
int n,m;
long long a[N],dp[N],x[N],f[N];
long long ma=-100,aa,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	cin>>a[1];
	aa=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
		aa=aa&a[i];
	}
	if(n==1||n==2||n==4||n==8||n==16||n==32||n==64||n==128||n==256||n==512||n==1024||n==2048||n==4096||n==8192||n==16384||n==32768||n==65536||n==131072||n==262144){
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=n;i>=n-m+1;i--){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<ma<<'\n';
		return 0;
	}// 6
	if(m==n){
		cout<<aa<<'\n';
		return 0;
	}//7
	if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=1;j<i;j++)
				ans=max(a[i]&a[j],ans);
		cout<<ans;
		return 0;
	}//8~10
	if(m==n-1){
		x[1]=a[2];
		ans=-10;
		for(int i=2;i<=n;i++) x[1]=x[1]&a[i];
		for(int i=2;i<=n;i++){
			x[i]=a[i-1];
			for(int j=1;j<=n;j++)
				if(j!=i) x[i]=x[i]&a[j];
			ans=max(ans,x[i]);
		} 
		cout<<ans;
		return 0;
	}
	dp[1]=a[1];
	long long cs=0;
	for(int i=2;i<=n;i++){
		dp[i]=a[i];
		for(int j=1;j<i,cs<=m;j++){
			if(dp[i]<dp[j]&a[i]){
				dp[i]=dp[j]&a[i];
				cs++;
			}
		}
	}
	cout<<dp[n];
	return 0;
}
