#include<bits/stdc++.h>
using namespace std;

int a[500005],n,m,ans[500005],ansa[500005];
bool xingzhiA=1;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			xingzhiA=0;
		}
		if(xingzhiA){
			ansa[a[i]]=i;
		}
	}
	if(xingzhiA){
		for(int i=1;i<=m;i++){
			cout<<ansa[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int xb=1,pd[500005];
		for(int j=i;j<=n;j++){
			for(int k=xb-1;k>=1;k--){
				if(pd[k]==a[j]){
					xb=k;
					break;
				}
			}
			pd[xb]=a[j];
			xb++;
		}
		for(int j=1;j<xb;j++){
			ans[pd[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
