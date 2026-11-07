#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<n;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			for(int k=i;k<j;k++){
				if(a[k]==a[j]&&b[k]!=1){
					for(int l=k;l<j;l++){
						b[i]==1;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(b[j]==0){
				c[a[j]]+=1;
				b[j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	} 
	return 0;
} 
