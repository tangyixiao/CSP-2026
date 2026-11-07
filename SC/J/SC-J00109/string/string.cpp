#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,dp[200005];//以j为结尾的i个数 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;n>=i;i++)
		scanf("%d",&a[i]);
	for(int i=0;n>=i;i++)
		dp[i]=pow(2,30)-1; 	
	for(int i=1;m>=i;i++){
		int mx=dp[i-1];
		for(int j=i;n>=j;j++){
			int now=dp[j];
			dp[j]=mx&a[j];
			mx=max(mx,now);			
		}
	}
	for(int i=1;n>=i;i++)
		ans=max(dp[i],ans);
	cout<<ans;
	return 0;
} 