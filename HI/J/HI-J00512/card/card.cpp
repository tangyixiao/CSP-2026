#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005];
int c[1000005];
int main(){ 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int id=n-1;
			if(b[i]==a[j]){
				id=j;
				for(int k=id;k<n;k++){
					a[k]=0;
				}
				a[id]=b[i];
				break;
			}
			a[id]=b[i];
		}
		for(int k=0;k<m;k++){
			if(a[k]==1+k){
				c[k]++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
