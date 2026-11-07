#include<bits/stdc++.h>
using namespace std;
int ans,sum,n,m,a[200005],dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum&a[i];
	}if(m==n){
		cout<<sum;
	}else{
		dp[0]=(1<<30)-1;
		sort(a,a+n);
		for(int i=1;i<n;i++){
			for(int j=m;j>0;j--){
				dp[j]=max(dp[j],dp[j-1]&a[i]);
			}
		}cout<<dp[m];
	}
	return 0;
}