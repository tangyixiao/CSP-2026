#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[200005],c[200005];
long long s,e;
int dz(int i,int j,long long x){
	for(int l=j-1;l>=1;l--){
		if(c[l]==x){
			s=l,e=j-1;
			return 1;
		}
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[++k]=a[j];
			if(dz(i,k,a[j])==-1){
				continue;
			}
			else{
				for(int l=s;l<=e;l++){
					c[l]=-1;
				}
				s=0,e=0;
			}
		}
		for(int j=1;j<=k;j++){
			if(c[j]!=-1&&c[j]!=0){
				b[c[j]]++;
			}
			c[j]=0;
		}
		k=0; 
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

