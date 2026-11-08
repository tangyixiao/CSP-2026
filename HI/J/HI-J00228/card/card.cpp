#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	int a[500000]={};int a11=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1]&&i!=0){
			a11=0;
		}
	}
	int b[m]={};int x=0;
	int c[m]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<x;j++){
			if(b[x]==a[j]){
				int xx=x;
				for(int k=j;k<xx;k++){
					b[m]=0;x--;
				}
			}
		}
		b[x]=a[i];
		for(int k=0;k<m;k++){
			if(b[x]!=0) 
		}
	}
	if(a11==1){
		cout<<m;
		return 0;
	}
	for(int k=0;k<m;k++){
		cout<<c[k]<" ";
	}
	
	
	return 0;
}
