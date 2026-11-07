#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
const int M=2e3+5;
int n,m;
int a[N];
int dp[M][M];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					ans=max(ans,(a[i]&a[j]));
				}
			}
		}
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
	}
	else if(n>2000){
		int num[4];
		memset(num,0,sizeof num);
		int q=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1)
				num[1]++;
			if(a[i]==2)
				num[2]++;
			if(a[i]==3)
				num[3]++;
			if(a[i]==0)
				num[0]++;
			q=max(q,a[i]);
		}
		if(q>=4){
			cout<<q-(m-1);
			return 0;
		}
		if(m>=3){
			if(num[3]>=3){
				ans=3;
			}
			else{
				if(num[3]==2){
					if(num[2]>=1)
						ans=2;
					else if(num[1]>=1)
						ans=1;
					else
						ans=0;
				}
				if(num[3]==1){
					if(num[2]>=2)
						ans=2;
					else if(num[1]>=2)
						ans=1;
					else
						ans=0;
				}
				if(num[3]==0){
					if(num[2]>=3)
						ans=2;
					else if(num[1]>=3)
						ans=1;
					else
						ans=0;
				}
			}
		}
	}
	else{
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			dp[i][1]=a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=2;j<=i&&j<=m;j++){
				dp[i][j]=max(max(dp[i-1][j],dp[i-1][j-1]&a[j]),max(dp[i][j-1]&a[j],dp[i][j]));
			}
		}
		cout<<dp[n][m];
		return 0;
	}
	cout<<ans;
	return 0;
}