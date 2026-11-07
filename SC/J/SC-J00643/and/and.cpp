#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int m,n;
long long a,dp[N],sum=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(n==m){
		scanf("%d",&sum);
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			sum=sum&a;
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			if(a>sum) sum=a;
		}
		cout<<sum;
		return 0;
	}
	//memset(dp,-0x3f,sizeof dp);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		//cout<<a<<"\n";
		for(int j=m;j>=2;j--){
			//if(dp[j-1]&a>dp[j]) dp[j]=dp[j-1]&a;
			dp[j]=max(dp[j],dp[j-1]&a);
		}
		dp[1]=max(dp[1],a);
		//for(int j=1;j<=m;j++) cout<<dp[j]<<" ";
		//cout<<"\n------------\n";
	}
	cout<<dp[m];
	return 0;
} 


