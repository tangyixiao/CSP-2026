#include<bits/stdc++.h>
using namespace std;
int dp[2][200009];
int n,m;
int a[200009],f[200009],g[200009];
int solveBF(){
	f[0]=a[0];
	g[0]=a[n-1];
	for(int i=1;i<n;i++){
		f[i]=f[i-1]&a[i];
		g[i]=g[i-1]&a[n-1-i];
	}
	int ma=g[n-2];
	for(int i=1;i<n-1;i++){
		int k=f[i-1]&g[n-i-1];
		ma=max(k,ma);
	} 
	ma=max(f[n-2],ma);
	return ma;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(n==m+1){
		cout<<solveBF();
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==0)dp[i%2][0]=a[i];
			else if(i==0)dp[i%2][j]=0;
			else{
				dp[i%2][j]=max(dp[(i-1)%2][j-1]&a[i],dp[(i-1)%2][j]);
			} 
		}
	}
	cout<<dp[(n-1)%2][m-1];
	return 0;
}
