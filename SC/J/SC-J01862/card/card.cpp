#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n,a[10],b[10],c[10]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			if(a[j]==a[i]&&a[j]!=0){
				for(int k=i;k<j;k++){
					a[k]=0;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(a[j]!=0){
				c[a[j]]++;
			}
		}
		for(int j=1;j<i;j++){
			a[j]=0;
		}
		for(int j=i;j<=n;j++){
			a[j]=b[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 