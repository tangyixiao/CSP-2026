#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[300005],z[500005],r;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[j]=n+1;
		}
		for(int j=i;j<=n;j++){
			z[j]=0;
		}
		r=i-1;
		for(int j=i;j<=n;j++){
			if(b[a[j]]<=r){
				for(int k=b[a[j]]+1;k<=r;k++){
					b[z[k]]=n+1;
				}
				r=b[a[j]];
			}else{
				r++;z[r]=a[j];
				b[a[j]]=r;
			}
		}
		for(int j=1;j<=m;j++){
			if(b[j]<=r){
				c[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",c[i]);
	}
	return 0;
} 
