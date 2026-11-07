#include<bits/stdc++.h>
using namespace std;
long long zm[500001],a[500001],pp[500001],z,n,m;
int zz(int x){
	for(int i=x;i<=n;i++){
		zm[z]=a[i];
		for(int j=1;j<z;j++){
			if(zm[j]==zm[z]){
				z=j;
			}
		}
		z++;
	}
	return z;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		z=2;
		int u=zz(i);
		for(int j=1;j<z;j++){
			pp[zm[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		if(pp[i]!=0) cout<<pp[i]<<" ";
	}
	return 0;
}