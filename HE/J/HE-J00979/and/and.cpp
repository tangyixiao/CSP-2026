#include<bits/stdc++.h>
using namespace std;	
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200005];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int b[200005],c[200005];
	for(int i=0; i<m; i++){
		b[i]=a[i]/2;
		while(b[i]/2!=0){
			c[i]=a[i]%2;
			c[i]+=b[i]%2;
		}
	}
	for(int i=0; i<n ;i++){
		c[i]+=c[i]*10;
	} 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(c[i]==c[j]){
				cout<<12;
				break;
			}
		}
	} 

	return 0;
} 
