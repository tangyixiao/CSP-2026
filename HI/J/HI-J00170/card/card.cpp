#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n,i,j,k;
	cin>>n>>m;
	int dcard[n],ncard[n];
	for(i=0;i<n;i++){
		cin>>dcard[n];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(dcard[j]==i){
			   	ncard[i]=dcard[j];
			   	ncard[i+1]=dcard[j+1];
			}
			for(k=0;k<n;k++){
				if(ncard[k]==i){
					cout<<j<<" ";
				}
			}
		}
	}
	return 0;
}
