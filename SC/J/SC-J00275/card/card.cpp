#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000];
int b[1000];
int c[1000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=0;k<n;k++){
				if(b[k]==0){
					b[k]=a[j];
					break;
				}
				if(a[j]==b[k]){
					for(int x=k+1;x<n;x++){
						b[x]=0;
					}
					break;
				}
			}
		}
		for(int j=0;j<n;j++){
			c[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}