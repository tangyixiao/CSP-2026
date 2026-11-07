#include<bits/stdc++.h>
using namespace std;

const int maa=2e5+5;
long long a[maa],dp[maa]; 
int n,m,f,w;
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin >>n>>m;
	for (int i=1;i<=n;i++){
		cin >>a[i];
		if (dp[1]<a[i]){
			dp[1]=a[i];
			f=i;
		}
	}
	for (int i=1;i<=m-1;i++){
		if (f>1){
			w=dp[i]&a[1];
		}
		else{
			w=dp[i]&a[2];
		}
		dp[i+1]=w;
		for (int j=1;j<=n;j++){
			if (dp[i]&a[j]>w && j!=f){
				dp[i+1]=dp[i]&a[j];
			}
		}
	}
	cout <<dp[m];
	return 0;
}
