#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001]={},b[100001]={},c[100001]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int l=1;l<=n;l++){	
		for(int i=l;i<=n;i++){
			c[i]=a[i];
			for(int j=1;j<i;j++){
				if(c[j]==c[i]){
					for(int k=j;k<i;k++){
						c[k]=-1;
					}
				}
			}
			if(i==n){
				for(int o=1;o<=n;o++){
					if(c[o]!=-1)b[c[o]]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
    return 0;
}