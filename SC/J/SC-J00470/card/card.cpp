#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m+1]={0};
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	for(int i=0;i<m;i+=1){
		for(int j=n;j>=0;j-=1){
			if(m==a[j]-'0'){
				for(int k=j+1;k<n;k+=1){
					a[k]=0;
				}
				break;
			}
		}
		for(int j=1;j<=m;j+=1){
			for(int k=0;k<n;k+=1){
				if(j==a[k]-'0'){
					b[j]+=1;
				}
			}
		}
	}
	for(int i=1;i<=m;i+=1){
		cout<<b[i]<<" ";
	}
}