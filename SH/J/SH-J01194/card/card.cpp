#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[5005]={};
	int b[3005]={};
	int c[5005]={};
	int d[3005]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=m;i++){
		b[i]=0;
		d[i]=0;
	}
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			c[j]=a[j];
		}
		/*for(int j=i+1;j<n;j++){
			if(c[i]==c[j] && c[i]!=0){
				for(int k=i;k<j;k++){
					c[k]=0;
				}
			}
		}*/
		for(int l=i;l<n;l++){
		    for(int j=l+1;j<n;j++){
			    if(c[l]==c[j] && c[l]!=0){
			    	for(int k=l;k<j;k++){
				    	c[k]=0;
				    }
			    }
		    }
		}
		for(int j=i;j<n;j++){
			d[c[j]]=0;
		}
		for(int j=i;j<n;j++){
			if(d[c[j]]<1){
				b[c[j]]++;
				d[c[j]]++;
			}
		}
	}
	for(int k=1;k<=m;k++){
		if(k<m)cout<<b[k]<<' ';
		if(k==m) cout<<b[k];
	}
	return 0;
} 
