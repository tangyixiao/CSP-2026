#include<bits/stdc++.h>
using namespace std;
int n,m,r,w,q,a[200001],b[200001],c[200001],d[200001],e[200001],f[200001],sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		r=1;
		for( ;a[i]>0;a[i]/=2){
			b[i]+=r*(a[i]%2);
			r*=10;
		}
	}
	w=n;
	for(int i=1;i<=n;i++){
		d[i]=i;
	}
	r/=10;
	for(int x=r;x>=1;x/=10){
		for(int j=1;j<=w;j++){
			if(b[d[j]]<x){
				if(b[d[j]]!=1){
					continue;
				}
				else{
					b[d[j]]=0;
				}
			}
			c[d[j]]=b[d[j]]/=x;
		}
		q=w;
		w=1;
		for(int j=1;j<=q;j++){
			if(c[d[j]]==1){
				d[w]=j;
				w++;
			} 
		}
		if(w>=m){
			for(int j=1;j<=w;j++){
				b[d[j]]%=x;
				e[j]=d[j];
		}
		}
		else{
			w=q;
			for(int j=1;j<=q;j++){
				d[j]=e[j];
			}
		}
	}
	sum=f[d[1]];
	for(int i=2;i<=m;i++){
		sum=(sum&f[d[i]]); 
	}
	cout<<sum;
	return 0;
}
