#include<bits/stdc++.h>
using namespace std;
int a[505],b[505],c[505],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(b,-1,sizeof(b));
		for(int j=i;j<=n;j++){
			for(int k=1;k<=j-i;k++){
				if(b[k]==a[j]){
					for(int l=k;l<j-i+1;l++) b[l]=0;
					break;
				}
			}
			b[j-i+1]=a[j];
		}
		for(int j=1;b[j]!=-1;j++) c[b[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	return 0;
}
