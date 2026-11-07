#include<bits/stdc++.h>
using namespace std;
int n,m,a[5000001],b[5000001],c[3000001],d[3000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}for(int i=1;i<=m;i++){
    	c[i]=i;
	}
	for(int i=1;i<=n;i++){
    	for(int j=i;j<=n;j++){
    	b[j]=a[j];
    	for(int p=2;p<=j;p++){
    	if(b[i]==b[p]){
    		for(int k=1;k<=p-1;k++){
			b[k]=0;
    		swap(b[k],b[k+j]);
	}
	}
	}if(j==n){
	for(int z=1;z<=n;z++){
		for(int u=1;u<=n;u++){
		if(b[u]==c[z]){
			d[z]++;
		}
	}
	}
	}
	}
	}for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}  
	return 0;
}