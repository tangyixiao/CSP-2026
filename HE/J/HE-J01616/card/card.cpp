#include<bits/stdc++.h>
using namespace std;
int a[500001],card[500001],ans[300001],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int z=1;z<=n;z++){
			if(a[z]!=-1){
				for(int j=1;j<=z;j++){
					if(a[z]==card[j]){
						for(int k=j;j<=z-1;k++){
							card[k]=0;
						}
					}
				}
				card[z]=a[z];
				a[z]=-1;
			}
		}
		for(int i=1;i<=n;i++){
			if(card[i]!=0){
				a[i]=card[i];
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		if(ans[i]!=1) cout<<ans[i]<<" ";
	}
	return 0;
}
