#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n,m,mx,k,mxn,mxnn,a[maxn],dp[2005][2005];
int ans(int x){
	int sum;
	for(int i=1;i<x;i++){
		if(i==1) sum=a[1];
		else sum=sum&a[i];
	}
	for(int i=x+1;i<=n;i++) sum=sum&a[i];
	return sum;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1) k=a[1];
		else k=k&a[i];
		mx=max(mx,a[i]);
		dp[i][1]=mx;
	} 
	if(m==n){
		cout<<k;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			mxn=max(mxn,ans(i));
		}
		cout<<mxn;
		return 0;
	}
	if(m==1){
		cout<<mx;
		return 0;
	} 
	if(m==2){
		int sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum;
		return 0;
	}
	if(mx<4){
		int x1=0,x2=0,x3=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1) x1++;
			else if(a[i]==2) x2++;
			else x3++;
		}
		if(x3>=m) cout<<3;
		else if(x2>=m) cout<<2;
		else cout<<1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=min(i,m);j++){
			dp[i][j]=max(dp[i][j],dp[i-1][j-1]&a[i]);
		}
		mxnn=max(mxnn,dp[i][m]);
	}
	cout<<mxnn;
	return 0;
}