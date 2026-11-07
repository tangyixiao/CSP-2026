#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005],b[1000005],c[1000005];
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
			for(int k=i;k<j;k++){
				if(a[k]==a[j]){
					for(int l=k;l<j;l++){
						a[l]=0;
					}
				}
			}
			
		}
		for(int k=i;k<=n;k++){
				c[a[k]]++;
				
				a[k]=b[k];
		}
	
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}