#include<bits/stdc++.h>
using namespace std;
freopen"card.in"stdin;
freopen"card.out"stdout;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1],c[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n+1],d[m+1]={0},sum=0,cnt=0,exm=0;
	while(exm++&&exm<=n){
		for(int i=exm;i<n;i++){
			for(int j=exm;j<i;j++){
				if(c[j]==a[i]){
					for(int k=j;k<=i;k++){
						c[k]=0;
					}
					c[j]=a[i];
				}
				else c[i]=a[i];
			}
		}
		for(int i=exm;i<n;i++){
			if(c[i]>0){
				b[sum]=c[i];
				sum++; 
			}
		}
		for(int i=exm;i<sum;i++){
			cnt=b[i];
			d[cnt]++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
	return 0;
} 