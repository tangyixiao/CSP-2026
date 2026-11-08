#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int c[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int coun=0;
		for(int z=1;z<=n;z++){
			memset(c,0,sizeof(c));
			memset(b,0,sizeof(b));
			int xb=0;
			for(int j=z;j<=n;j++){
				if(c[a[j]]==0){
					xb++;
					c[a[j]]=xb;
					b[xb]=a[j];
				}
				else{
					int k=c[a[j]];
					for(;k<=j-1;k++){
						c[b[k]]=0;
						b[k]=0;
						xb--;
					}
					xb++;
					c[a[j]]=xb;
					b[xb]=a[j];
				}
			}
			if(c[i]!=0){
				coun++;
			}
		}
		cout<<coun<<" ";
	}
	return 0;
}

