#include<iostream> 
using namespace std;
int n,m;
long dp[100001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>dp[i];
	}
	for(int i=1;i<=n;i++){
		if(m-1>0){
			int t=dp[i-1]&dp[i];
			if(t>dp[i-1]){
				dp[i]=t;
				m-=1;
			}
			else{
				dp[i]=dp[i];
			}
		} 
	}
	cout<<dp[n];	
	return 0;	
}