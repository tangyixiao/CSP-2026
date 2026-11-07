#include <bits/stdc++.h>
using namespace std;
int a[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,v;
	cin>>n>>v;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int dp[200000]={};
	for(int i=1;i<=n;i++){
		for(int j=v;j>=0;j--){
			if(j==1) dp[j]=max(dp[j],a[i]);
			else dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	int cnt=0,temp,maxn=-1;
	for(int i=n;i>=1;i--){
		if(cnt==0) {
			temp=a[i];
			cnt++;
		}
		else if(a[i]!=temp){
			temp=a[i];
			cnt=1;
		}
	    if(cnt>=v){
		maxn=a[i];break;}
		cnt++;
		
	}
    cout<<max(maxn,dp[v]);
	return 0;
}
