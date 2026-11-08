#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],dp[200001];
bool cmp(int i,int j){
	int l=0,r=0;
	while(i){
		l+=i%2;
		i/=2;
	}
	while(j){
		r+=j%2;
		j/=2;
	}
	return l>r;
}
int main(){
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout); 
	dp[0]=INT_MAX;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			if(dp[j]>(dp[j-1]&a[i])) break;
			//cout<<dp[j]<<' '<<dp[j-1]<<' '<<a[i]<<' '<<(dp[j-1]&a[i])<<"\n";
			dp[j]=(dp[j-1]&a[i]);
		}
	}
	cout<<dp[m];
	return 0;
}
