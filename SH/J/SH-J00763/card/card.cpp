#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],vis[500005],f[500005][3];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(f,0,sizeof f);
		memset(vis,0,sizeof vis);
		for(int j=i;j<=n;j++){
			for(int k=i;k<j;k++){
				if(f[k][1]){
					int ct1=f[k][1];
					while(ct1){
						k++;
						ct1+=f[k][1]-f[k][2]; 
					}
				}
				if(a[k]==a[j]){
					f[k][1]++;
					f[j][2]++;
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(f[j][1]){
				int ct1=f[j][1];
				while(ct1){
					j++;
					ct1+=f[j][1]-f[j][2]; 
				}
			}
			vis[a[j]]=1;
		}
		for(int j=1;j<=m;j++) ans[j]+=vis[j];
	}
	for(int j=1;j<=m;j++) cout<<ans[j]<<" ";
	return 0;
}
