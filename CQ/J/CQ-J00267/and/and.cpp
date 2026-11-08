#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[200005];
int dp[3005][3005];
int n,m;
bool check(){
	bool flag=0;
	for(int i=1;i<=n;i++){
		flag=0;
		for(int j=1;j<=30;j++){
			int k=int(pow(2,j));
			if(k-1==a[i]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			return false;
		}
	}
	return true;
}
bool cmp(int t1,int t2){
	return t1>t2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(check()){
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
		return 0;
	}
	dp[1][1]=a[1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			for(int k=1;k<=m;k++){
				if(k==1){
					dp[i][k]=max(dp[i][k],a[i]);
				}else{
					dp[i][k]=max(dp[i][k],(a[i]&dp[j][k-1]));
				}
			} 
		}
	}
	int max1=-1;
	for(int i=1;i<=n;i++){
		max1=max(max1,dp[i][m]);
	}
	cout<<max1;
	return 0;
}
