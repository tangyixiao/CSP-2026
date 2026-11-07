#include<bits/stdc++.h>
using namespace std;
int n,m,a[5005],b[5005],ans[3005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];	
		b[i]=a[i];	
	}
	for(int i=1;i<=n;++i){
		for(int ii=i;ii<=n;++ii){
			for(int j=i;j<=ii;++j){
				if(a[j]==a[ii]&&ii!=i){
					for(int k=j+1;k<=ii;++k){
						a[k]=0;
					}
				}
			}
		}
		for(int ij=1;ij<=n;++ij){
			for(int jj=1;jj<=m;++jj){
				if(a[ij]==jj) ans[jj]++;
			}
		}
		for(int x=1;x<=n;++x) a[x]=b[x];
		for(int xx=1;xx<=i;++xx) a[xx]=0;
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<" ";
	
	fclose(stdin);fclose(stdout);
	return 0;
}