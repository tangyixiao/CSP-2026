#include<bits/stdc++.h>
using namespace std;
int a[200001],da,dp[200001],da1;	
int n,m;	
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		da1=max(da1,a[i]);
	}	
	if(m==1){
		cout<<da1;
		return 0;
	}	
	dp[0]=-1;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int t=a[i]&a[j];
			//	cout<<i<<" "<<j<<" "<<t<<endl;
				da=max(da,t);
			}
		}
		cout<<da;
		return 0;
	}
	for(int i=1;i<=m;i++){
		for(int j=n;j>=1;j--){
			int p=dp[j-i]&a[j];
			//cout<<p<<" "<<dp[j]<<endl;
			dp[j]=max(dp[j],p);
		}
		/*for(int j=1;j<=n;j++){
			cout<<dp[j]<<" ";
		}
		cout<<endl;*/
	}

	cout<<dp[n];
}
/*5 3
31 3 1 15 7
*/