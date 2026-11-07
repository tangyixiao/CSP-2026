#include<bits/stdc++.h>
using namespace std;
int a[2001],b[3001],c[2001],n,m;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	int k=0;
	for(int i=3000;i>=0;i--){
		if(b[i]==1){
			c[k]=i;
			k++;
		}
	}
	cout<<c[m-1];
	return 0;
	
}
