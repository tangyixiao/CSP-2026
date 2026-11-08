#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,b[200005],c[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			bool x=0;
			int p=0;
			for(int k=1;k<j;k++){
				if(b[k]==a[j]){
					x=1;
					p=k;
					break;
				}
			}
			if(x==1){
				for(int k=p;k<=j;k++){
					b[k]=0;
				}
			}
			b[j]=a[j];
		}
		for(int j=1;j<=n;j++){
			c[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
	return 0;
}
