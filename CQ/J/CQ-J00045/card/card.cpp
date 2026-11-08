#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int id[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int f=i;
		for(int j=i;j<=n;j++){
			int t=a[j];
			if(id[t]==0 || id[t]>=f){
				id[t]=f;
			}else{
				f=id[t]-1;
			}
			f++; 
		}
		for(int k=1;k<=m;k++){
			if(id[k]!=0 && id[k]<f) ans[k]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	} 
	return 0;
}
