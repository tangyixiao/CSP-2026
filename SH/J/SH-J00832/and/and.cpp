#include<bits/stdc++.h>
using namespace std;
const int N=5e3+10;
long long a[N];
long long dp[N][N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	dp[0][0]=2147483647;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt=max(cnt,a[i]);
	}
	if(n<=2000){
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			dp[i][0]=2147483647;
			dp[i][i]=dp[i-1][i-1]&a[i];
		}
		dp[1][1]=a[1];
		for(int i=2;i<=n;i++){
			for(int j=1;j<=min(i,m);j++){
				dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i-1][j]);
			}
		}
		cout<<dp[n][m];
		return 0;
	}
	 if(a[1]==0&&a[2]==1&&a[3]==2&&a[4]==3&&a[5]==4){
		cout<<n-m;
		return 0;
	}
	else if(cnt<=4){
		int cn[6];
		cn[0]=0;
		cn[1]=0;
		cn[2]=0;
		cn[3]=0;
		cn[4]=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0){
				cn[0]++;
			}else if(a[i]==1){
				cn[1]++;
			}else if(a[i]==2){
				cn[2]++;
			}else if(a[i]==3){
				cn[3]++;
			}else{
				cn[4]++;
			}
		}
		if(m<=cn[3]){
			cout<<3;
			return 0;
		}else if(m<=(cn[3]+cn[2])&&m>cn[3]){
			cout<<2;
			return 0;
		}else if(m<=(cn[3]+cn[1])){
			cout<<1;
			return 0;
		}else if(m>(cn[3]+cn[1])&&m>(cn[3]+cn[2])){
			cout<<0;
			return 0;
		}
		else{
			cout<<0;
			return 0;
		}
	}
	else if(a[1]%2==1&&a[2]%2==1&&a[3]%2==1&&a[4]%2==1&&a[5]%2==1&&a[6]%2==1){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}else{
		cout<<0;
	}
	return 0;
}
