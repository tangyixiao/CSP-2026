#include<bits/stdc++.h>
using namespace std;
int n,m,a[500009],dp[500009]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]++;
	}
	if(n==1){
		if(m==1){
			if(dp[1]%2!=0) cout<<1<<' ';
		}
		if(m==2){
			if(dp[1]%2!=0) cout<<1<<' ';
			if(dp[2]%2!=0) cout<<1' ';
		}		
	}
	return 0;
}
