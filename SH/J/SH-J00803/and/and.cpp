#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],wei[200001][31],sum[1231],ans,vis[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		wei[i][0]=a[i]%2;
		sum[0]+=wei[i][0];
		for(int j=1;j<30;j++){
			a[i]/=2;
			wei[i][j]=a[i]%2;
			sum[j]+=wei[i][j];
		}
	}
	for(int i=29;i>=0;i--){
		if(sum[i]>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++){
				if(vis[j]==0&&wei[j][i]==0){
					for(int k=i-1;k>=0;k--){
						sum[k]-=wei[j][k];
					}
					vis[j]=1;
				}
			}
		}
	}
	cout<<ans;
}
