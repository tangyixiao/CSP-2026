#include<bits/stdc++.h>
using namespace std;

const int mn=2e5;
int n;
long long a[mn];
char c;
long long dp[mn][3];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	a[0]=0;
	cin>>a[1]>>c;
	for(int j=1;j<=a[1];j++){
		dp[j][j]=0;
	}
	for(int i=2;i<=n;i++){
		cin>>a[i]>>c;
		a[i]+=a[i-1];
		for(int j=a[i-1]+1;j<=a[i];j++){
			dp[j][j]=0;
		}
	}
	for(int l=2;l<=n;l++){
		for(int i=1;i+l-1<=n;i++){
			int j=i+l-1;
			dp[i][j]=n;
			if(a[i]==a[j]){
				dp[i][j]=min(dp[i][j],dp[i+1][j-1]);
			}else{
				dp[i][j]=min(dp[i][j],dp[i+1][j-1]+1);
			}
		}
	}
	printf("%d",dp[1][n]);
	return 0;
}