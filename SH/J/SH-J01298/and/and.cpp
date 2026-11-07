#include <bits/stdc++.h>
using namespace std;
long long m,n,a[200001],dp[200001],b[200001],li,mdp,mdpj;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//cout<<a[i]<<" "<<i<<endl;
	}
	dp[m]=-1;
	for(int k=1;k<=m;k++){
		dp[m]&=a[k];
		b[k]=a[k];
	}
	//cout<<dp[m]<<endl;
	for(int j=m+1;j<=n;j++){
		mdp=dp[j-1];
		mdpj=0;
		for(int k=1;k<=m;k++){
			dp[j]=-1;
			li=a[j];
			swap(li,b[k]);
			for(int l=1;l<=m;l++){
				dp[j]&=b[l];
			}
			if(mdp<=dp[j]){
				mdp=dp[j];
				mdpj=k;
			}
			swap(li,b[k]);
		}
		swap(a[j],b[mdpj]);
		dp[j]=mdp;
		//cout<<m<<" "<<j<<" "<<mdpj<<" "<<dp[j]<<endl;
	}
	cout<<dp[n];
	return 0;
}
