#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],dp[2005][2005];
int s1[N],s2[N]; 
bool cmp(int x){
	x++;
	while(x!=0){
		if(x%2==1) return false;
		x/=2;
	}
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	bool f=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(cmp(a[i])==false){
			f=1;
			break;
		}
		dp[i][1]=a[i];
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(f==0){
		sort(a+1,a+n+1);
		cout<<a[n+1-m];
		return 0;
	}
	if(m==n-1){
		int ans=0;
		s1[1]=a[1],s2[n]=a[n];
		for(int i=2;i<=n;i++) s1[i]=s1[i]&a[i];
		for(int i=n-1;i>=1;i--) s2[i]=s2[i+1]&a[i];
		for(int i=1;i<=n;i++) ans=max(ans,s1[i-1]&s2[i+1]);
		cout<<ans;
		return 0;
	}
	for(int k=2;k<=m;k++){
		for(int i=k;i<=n-m+k;i++){
			for(int j=1;j<i;j++){
				dp[i][k]=max(dp[i][k],dp[j][k-1]&a[i]);
			}
		}
	}
	int ans=0;
	for(int i=m;i<=n;i++) ans=max(ans,dp[i][m]);
	cout<<ans;
	return 0;
}
