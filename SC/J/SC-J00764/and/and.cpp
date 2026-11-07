#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m;
long long a[N];
long long dp[2005][2005];
long long mm=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mm=max(mm,a[i]);
	}
	if(n<=2000){
		if(n<=20){
			for(int i=1;i<=n;i++){
				dp[i][1]=a[i];
			}
			for(int i=2;i<=n;i++){
				for(int j=1;j<=min(i,m);j++){
					if(j==1){
						dp[i][j]=max(dp[i-1][j],a[i]);
					}
					else {
						long long x=dp[i-1][j-1]&a[i];
						dp[i][j]=max(x,dp[i-1][j]);
					}
				}
			}
			cout<<dp[n][m];
			return 0;
		}
		else {
			if(m==1){
				long long ans=-1;
				for(int i=1;i<=n;i++)ans=max(ans,a[i]);
				cout<<ans;
			}
			else if(m==2){
				long long ans=-1;
				for(int i=1;i<=n;i++){
					for(int j=i+1;j<=n;j++){
						ans=max(ans,a[i]&a[j]);
					}
				}
				cout<<ans;
			}
			else if(m==n){
				int ans=a[1];
				for(int i=2;i<=n;i++){
					ans&=a[i];
				}
				cout<<ans;
			}
		}
	}
	else {
		if(mm<4){
			int num[4];
			for(int i=1;i<=n;i++)num[a[i]]++;
			if(num[3]>=m)cout<<3;
			else if(num[3]+num[2]>=m)cout<<2;
			else if(num[3]+num[1]>=m)cout<<1;
			else cout<<0;
		}
		else {
			sort(a+1,a+1+n);
			cout<<a[m];
		}
	}
	return 0;
} 