#include<bits/stdc++.h>
using namespace std;
int n,m,a[200009][31],b[200009];
int c;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long x=0;
		c=0;
		cin>>x;
		while(x!=0){
			a[i][c++]=x%2;
			x/=2;
		}
	}
	int cnt=0,tar=0;
	for(int i=30;i>=0;i--){
		cnt=0;
		for(int j=1;j<=n;j++){
			if(a[j][i])cnt++;
		}
		if(cnt>=m){
			tar=i;
			break;
			
		}
	}
	c=0;
	for(int i=1;i<=n;i++){
		if(a[i][tar]){
			int n=0;
			for(int j=30;j>=0;j--){
				n=2*n+a[i][j];
			}
			b[++c]=n;
		}
	}
	int dp[200009]={0x7FFFFFFF};
	for(int i=1;i<=m;i++){
		int maxn=0,mxid=0;
		for(int j=1;j<=n;j++){
			if(maxn<(b[j]&dp[i-1]))mxid=j;
			maxn=max(maxn,b[j]&dp[i-1]);
		}
		dp[i]=maxn;
		b[mxid]=0;
	}
	cout<<dp[m];
	return 0;
}


