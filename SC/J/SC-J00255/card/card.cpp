#include<bits/stdc++.h>
using namespace std;
int a[500005],tong[300005],pz[500005];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
	cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=500004;j++){
			pz[i]=0;
		}
		for(int j=i;j<=n;j++){
		    pz[j]=a[j];
			for(int k=i;k<=j-1;k++){
				if(pz[k]==pz[j]){
					for(int l=k;l<=j-1;l++){
						pz[l]=0;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			tong[pz[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
	    cout<<tong[i]<<" ";
	}
	return 0;
}
