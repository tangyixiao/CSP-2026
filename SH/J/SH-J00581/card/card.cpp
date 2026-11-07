#include <bits/stdc++.h>
using namespace std;
int s[500050],r[500050],dp[200020],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(dp,0,sizeof(dp));
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>s[i];
	}
	for(int i=1;i<=n;++i){
		memset(r,0,sizeof(r));
		for(int j=i,jj=1;j<=n;++j,++jj){
			r[jj]=s[j];
			for(int k=1;k<jj;++k){
				if(r[k]==r[jj]){
					for(int h=k+1;h<=jj;++h){
						r[h]=0;
					}
				}
			}
		}
		for(int j=1;j<=n;++j){
			dp[r[j]]++;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<dp[i]<<" ";
	}
	return 0;
}
