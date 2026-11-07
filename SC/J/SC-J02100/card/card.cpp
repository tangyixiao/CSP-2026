#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[200005],c[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=j-1;k>=i;k--){
				if(b[j]==b[k]&&b[k]!=-1){
					for(int l=k;l<j;l++){
						b[l]=-1;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(b[j]!=-1){
				c[b[j]]++;
			}
		}
		for(int j=1;j<=n;j++){
			b[j]=a[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}